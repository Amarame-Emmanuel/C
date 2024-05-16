#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct Question {
    string questionText;
    char correctOption;
    vector<string> options;
};

vector<Question> loadQuestionsFromFile(const string& filename) {
    vector<Question> questions;
    ifstream file(filename);

    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string questionText, correctOptionStr, option;

            getline(iss, questionText, ',');


			getline(iss, correctOptionStr,'*');
            char correctOption = correctOptionStr[0];
            
            vector<string> options;
            while (getline(iss, option, ':')) {
                options.push_back(option);
            }

			if (option.size() == 4){
            questions.push_back({questionText, correctOption, options});
        }
        } 

        file.close();
    } else {
        cerr << "Unable to open file: " << filename << endl;
    }

    return questions;
}

void displayQuestion(const Question& question) {
    cout << "Question: " << question.questionText << endl;

    for (size_t i = 0; i < question.options.size(); ++i) {
        cout << static_cast<char>('A' + i) << ". " << question.options[i] << endl;
    }
}

int main() {
    string filename = "Questions.txt";

    vector<Question> questions = loadQuestionsFromFile(filename);

    if (questions.empty()) {
        cerr << "No questions loaded. Exiting." << endl;
        return 1; // Exit with an error code
    }

    int currentQuestion = 0;
    int correctAnswers = 0;

    while (currentQuestion < questions.size()) {
        // Display the current question and options
        displayQuestion(questions[currentQuestion]);

        // Accept user input for the answer
        char userAnswer;
        cout << "Your Answer (Enter the letter corresponding to your choice, 'P' for previous, 'N' for next): ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        // Check user's choice
        if (userAnswer == 'P') {
            if (currentQuestion > 0) {
                --currentQuestion;
            } else {
                cout << "You are already at the first question." << endl;
            }
        } else if (userAnswer == 'N') {
            if (currentQuestion < questions.size() - 1) {
                ++currentQuestion;
            } else {
                cout << "You are already at the last question." << endl;
            }
        } else {
            // Check the answer
            if (userAnswer == questions[currentQuestion].correctOption) {
                cout << "Correct!" << endl;
                ++correctAnswers;
            } 
        }

        // Ask if the user wants to move to the next question
        if (userAnswer != 'P' && userAnswer != 'N') {
            cout << "Do you want to move to the next question? (y/n): ";
            char choice;
            cin >> choice;

            if (choice != 'y' && choice != 'Y') {
                break;  // Exit the loop if the user doesn't want to move to the next question
            }
        }
    }

    // Display the user's score
    cout << "Your Score: " << correctAnswers << " out of " << questions.size() << " questions." << endl;


    cout << "End of the test. Thanks for participating!" << endl;

    return 0;
}