#include <stdio.h>
#include <string.h>
struct Question {
    char question[200];
    char options[4][100];
    char correctOption;
};

int main() {
    struct Question quiz[] = {
        {
            "What is the capital of India?",
            {"A. New Delhi", "B. Mumbai", "C. Kolkata", "D. Chennai"},
            'A'
        },
        {
            "Which language is used to create this program?",
            {"A. Python", "B. C", "C. Java", "D. C++"},
            'B'
        },
        {
            "Which planet is known as the Red Planet?",
            {"A. Earth", "B. Venus", "C. Mars", "D. Jupiter"},
            'C'
        }
    };

    int totalQuestions = sizeof(quiz) / sizeof(quiz[0]);
    int score = 0;
    char answer;

    printf("===== Simple Quiz Game =====\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("Q%d: %s\n", i + 1, quiz[i].question);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &answer);

        if (answer >= 'a' && answer <= 'z') {
            answer -= 32;
        }

        if (answer == quiz[i].correctOption) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! Correct answer: %c\n\n", quiz[i].correctOption);
        }
    }
    printf("===== Quiz Finished =====\n");
    printf("Your Score: %d/%d\n", score, totalQuestions);

    return 0;
}
