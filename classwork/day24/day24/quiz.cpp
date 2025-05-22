#include <stdio.h>
#include <string.h>

#define MAX_QUESTIONS 5

// Structure to store questions
typedef struct {
    char question[100];
    char options[4][50];
    int correctAnswer; // Index of correct option
} Quiz;

// Function to run the quiz
void runQuiz(Quiz quiz[]) {
    int score = 0, answer;

    for (int i = 0; i < MAX_QUESTIONS; i++) {
        printf("\nQ%d: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%d. %s\n", j + 1, quiz[i].options[j]);
        }

        printf("Enter your choice (1-4): ");
        scanf("%d", &answer);

        if (answer - 1 == quiz[i].correctAnswer) {
            printf("? Correct!\n");
            score++;
        }
        else {
            printf("? Wrong! Correct answer: %s\n", quiz[i].options[quiz[i].correctAnswer]);
        }
    }

    printf("\nFinal Score: %d/%d\n", score, MAX_QUESTIONS);
}

int main() {
    Quiz quiz[MAX_QUESTIONS] = {
        {"Which planet is known as the Red Planet?", {"Earth", "Mars", "Jupiter", "Venus"}, 1},
        {"What is the largest mammal in the world?", {"Elephant", "Blue Whale", "Giraffe", "Polar Bear"}, 1},
        {"What is the capital of Japan?", {"Kyoto", "Osaka", "Tokyo", "Nagoya"}, 2},
        {"Which element has the chemical symbol 'O'?", {"Oxygen", "Gold", "Osmium", "Silver"}, 0},
        {"What is the boiling point of water at standard atmospheric pressure?", {"100°C", "0°C", "50°C", "150°C"}, 0}
    };

    printf("Welcome to the Quiz Game!\n");
    runQuiz(quiz);

    return 0;
}
