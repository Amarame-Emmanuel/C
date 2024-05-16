#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

struct Question{
	string text;
	vector<string> options;
	char correctOption;
};

class Quiz {
	private:
		vector<Question> questions;
		int score;
		
	public:
		Quiz() : score(0) {}
		
		void addQuestion(const string& questionText, const vector<string>& options, char correctOption) {
			Question q{questionText, options, correctOption};
			questions.push_back(q);
		}
		
		
		void run() {
			for (const auto& question : questions) {
				displayQuestion(question);
				char userAnswer = getUserAnswer();
				checkAnswer(question, userAnswer);
			}
			
			
			displayResult(); 
			
		}
		
	private:
		void displayQuestion(const Question& question) {
			cout << question.text << endl;
			
			char optionChar = 'A';
			for (const auto& option : question.options) {
				cout << optionChar << ". " << option << endl;
				optionChar++;
			}
	}
	
		char getUserAnswer() {
			cout << "Your answer: ";
			string input;
			getline(cin, input);
			if (input.empty()) {
				return '\0'; 
			}
			return toupper(input[0]);
		}
		void checkAnswer(const Question& question, char userAnswer) {
			if (userAnswer == question.correctOption) {
				cout << "Correct!" << endl;
				score++;
			}
			else {
				cout << "Incorrect!!. The correcr option is " << question.correctOption << endl;
			}
			
			cout << endl;
		}
		
		void displayResult() {
			cout << "Quiz completed. Your score: " << score << "/" << questions.size() << endl;
		}
};

int main() {
	
	srand(static_cast<unsigned int>(time(nullptr)));
	Quiz quiz;
	quiz.addQuestion("What is the capital of France?", {"Paris","London","Rome","Berlin","Madrid"}, 'A');
	quiz.addQuestion("Where is PAU located?", {"Lagos","Oyu","Port Harcourt","Kaduna","Kastina"}, 'A');
	
	quiz.run();
	return 0;
}