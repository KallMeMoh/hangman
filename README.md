# Hangman Game

This is a simple hangman game implemented in C++. The game randomly selects a word from a list of 1378 words (I will change that in the future, currently just messing around with C++) and the player's job is to guess the word by entering a letter. The player has 10 tries to guess the word correctly. Guessing a wrong vowel (a, e, u, i, o) will not affect the number of tries the player has.

## How to Play

1. Run the program.
2. The program will display a welcome message and explain the rules of the game.
3. Enter the number of rounds you want to play (between 1 and 10).
4. The game will start and you will be prompted to enter a letter.
5. Enter a letter and press enter.
6. If the letter is correct and part of the word, it will be revealed in the word.
7. If the letter is incorrect, you will lose a try. Guessing a wrong vowel will not affect the number of tries.
8. Keep guessing letters until you either guess the word correctly or run out of tries.
9. After each round, the program will display the word you had to guess, your guesses, and the number of wrong guesses.
10. Once all rounds are completed, the program will display a summary of your performance.

## Release Information

### Executable File

You can download the latest executable file from the [Releases](https://github.com/KallMeMoh/hangman/releases) page.

### Version History

- **v1.1.1:** Refactored code and bug fix.

  - Replaced magic numbers with constants.
  - Random number generator is now reseeded once at the start of the game.
  - Players now see the word upon failing / successfully guessing it.
  - Renamed function doMagic to updateProgress for clarity.
  - updateProgress now takes a reference to the progress string to update it.
  - updateProgress no longer takes a copy of parameters.
  - Removed unnecessary if statement in main.
  - Fixed bug where unsuccessful guess would not display the target word.

- **v1.0.0:** Initial game release. (no download link)

Please report any issues or bugs on the GitHub issues page.

_this is README is defo not ai generated_
