# 🧩 TermiChess Design Guide

This guide helps you understand the architecture of **TermiChess** so you can contribute effectively. You don’t need to grasp everything at once—just focus on your assigned class and learn how it fits in the bigger picture.

---

## 🏗️ Project Architecture Overview

### 🔹 Layers

1. **UI Layer** (`/ui`)
   - Handles styling, colors, and text formatting via ANSI escape codes.
   - Includes:
     - `ansi.hpp / .cpp`
     - `Text`, `Color`, `Message`, `ErrorMessage`, `Heading`, `InputMessage`

2. **Game Logic Layer** (`/game`)
   - Encapsulates chess rules and piece behavior.
   - Includes:
     - `ChessPiece`, `Pawn`, `Rook`, `Knight`, `Bishop`, `Queen`, `King`
     - `Board`, `Game`, `CasualGame`, `AIGame`

3. **Data Handling Layer**
   - Manages scores, timers, player names, file I/O.
   - Includes:
     - `Score`, `Name`, `TimeCounter`, `CSVHandler`

4. **Main Function**
   - Connects all modules and starts the game.

---

## 🧠 Key Class Responsibilities (Short Version)

### 🎨 UI & Messaging Classes
- `Text`: Holds text and its color.
- `Color`: Defines ANSI foreground/background/style.
- `Message`: Composes styled messages.
- `ErrorMessage`: Styled red message.
- `Heading`: Large display heading.
- `InputMessage`: Prompts and reads user input.

### ♟️ Chess Logic Classes
- `ChessPiece`: Abstract base class for all pieces.
- `Pawn`, `Rook`, `Knight`, etc.: Implement movement and validation.
- `Board`: 8x8 grid holding piece objects.
- `Game`: Manages players and matches.
- `CasualGame / AIGame`: Game modes.

### 📊 Data Classes
- `Score`: Holds and compares player scores.
- `Name`: Stores name and optional color.
- `TimeCounter`: Tracks time during matches.
- `CSVHandler`: Reads and writes match records.

### 🧰 Utility Classes
- `Symbol`: Chess characters (♙ ♞ ♜ etc.).
- `Position`: Manages board coordinates.
- `DictionaryTemplate`, `DataTableTemplate`: Key-value and table templates.
- `Menu`: Options menu and input.

---

## 💡 Team Collaboration Tips

- **Talha** (you): ANSI logic, architecture, base classes, coordination.
- **Friends**: Focus on:
  - `Text`, `Color`, `Message`, `ErrorMessage`
  - `Board`, `Score`, `Menu`
  - Piece-specific logic under guidance

---

## 🔁 Real Flow Example: Invalid Move
1. `InputMessage` receives move.
2. Move passed to relevant piece class.
3. `IsValid()` returns false.
4. `ErrorMessage` created with red text.
5. Displayed using ANSI styling.

---

## ✅ Final Tip
> "Just understand your piece of the puzzle. Don’t worry about the whole board — that’s my job." - Talha Ahmad

Happy coding! ♟️💻