# 🎯 Guess the Number Game in C

## 📌 Overview  
This is a simple **Guess the Number Game** implemented in C. The program generates a random number between 1 and 100, and the player attempts to guess it with hints provided along the way.  

## ✨ Features  
✅ Random number generation using `rand()`  
✅ Interactive gameplay with user input  
✅ Hints to guide the player (higher or lower guesses)  
✅ Tracks the number of attempts taken to guess correctly  

## 🛠️ How It Works  
1. The program generates a **random number** between 1 and 100.  
2. The user inputs a guess.  
3. The program provides feedback:  
   - 🔺 If the guess is **too low**, it prompts the user to pick a larger number.  
   - 🔻 If the guess is **too high**, it suggests a smaller number.  
4. The game continues until the user guesses the correct number, after which it displays the number of attempts taken.  

## 🔧 How to Use  
1. **Clone the repository:**  
   ```bash
   git clone <your-repo-link>
   ```
2. **Compile the code:**  
   ```bash
   gcc guess_game.c -o guess_game
   ```
3. **Run the game:**  
   ```bash
   ./guess_game
   ```
4. **Start guessing and enjoy the challenge!**  

## 📄 Sample Output  
```
Hey! Welcome to Guess the Number game  
Are you ready? Let's start  

Guess a number between (1 to 100): 50  
Oops! You missed, try guessing a larger number.  

Guess a number between (1 to 100): 75  
You missed! Try guessing a smaller number.  

Guess a number between (1 to 100): 67  
HURRAY! You nailed it in just 3 attempts.  
YOU ARE REALLY GOOD AT GUESSING.  
Can't wait to play with you again!  
```

## 🏆 Future Enhancements  
🔹 Add difficulty levels (Easy, Medium, Hard)  
🔹 Implement a scoring system based on attempts  
🔹 Allow the user to play multiple rounds  
🔹 Include a graphical user interface (GUI)  
