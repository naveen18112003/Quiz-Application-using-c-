#include <iostream>
using namespace std;

int playQuiz();

int main() {
    int finalResult = 0;
    finalResult = playQuiz();
    cout << "Your score is: " << finalResult << endl;

    if (finalResult >= 6) {
        cout << "You pass!" << endl;
    } else {
        cout << "You fail!" << endl;
    }

    return 0;
}

int playQuiz() {
    char startOption;
    char answer;
    int score = 0;

    cout << "----------- Welcome to Quiz Game -----------" << endl;
    cout << "----------- Please follow the instructions ---" << endl;
    cout << "Step 1: Quiz contains a total of 10 questions." << endl;
    cout << "Step 2: You will be given 1 mark for each right answer." << endl;
    cout << "Step 3: There will be no negative marking." << endl;
    cout << "Step 4: Please press 's' to start the quiz." << endl;
    cout << "Step 5: Please select options a, b, c, or d." << endl;
    cout << "Step 6: If you score >= 6, you will pass." << endl;
    
    cin >> startOption;
    
    if (startOption == 's' || startOption == 'S') {
        cout << "Q1. What is the capital of India?" << endl;
        cout << "(a) Delhi (b) Mumbai (c) Kolkata (d) Chennai" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q2. Who is the Prime Minister of India?" << endl;
        cout << "(a) Narendra Modi (b) Adityanath (c) Rahul Gandhi (d) Akhilesh Yadav" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q3. What is the national bird of India?" << endl;
        cout << "(a) Peacock (b) Sparrow (c) Parrot (d) Kingfisher" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q4. What is the national animal of India?" << endl;
        cout << "(a) Tiger (b) Cow (c) Elephant (d) Lion" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q5. What is the national flower of India?" << endl;
        cout << "(a) Lotus (b) Rose (c) Lily (d) Sunflower" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q6. Which one is a capital letter?" << endl;
        cout << "(a) a (b) A (c) b (d) e" << endl;
        cin >> answer;
        if (answer == 'b' || answer == 'B') {
            score++;
        }

        cout << "Q7. Which one is a numeric digit?" << endl;
        cout << "(a) 1 (b) a (c) $ (d) +" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q8. Which one is a small letter?" << endl;
        cout << "(a) A (b) N (c) L (d) s" << endl;
        cin >> answer;
        if (answer == 'd' || answer == 'D') {
            score++;
        }

        cout << "Q9. Which one is a vowel?" << endl;
        cout << "(a) a (b) r (c) p (d) s" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

        cout << "Q10. Which one is a programming language?" << endl;
        cout << "(a) C++ (b) Hindi (c) Spanish (d) Marathi" << endl;
        cin >> answer;
        if (answer == 'a' || answer == 'A') {
            score++;
        }

    } else {
        cout << "You have entered a wrong value, please enter 's' to start the quiz." << endl;
    }

    return score;
}
