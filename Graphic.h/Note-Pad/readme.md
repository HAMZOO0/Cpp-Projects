# Note-pad Application 

This is a simple text editor implemented in **C++** using the **graphics.h** library. It allows users to write, edit, save, and undo text operations. The project demonstrates basic text editing features and integrates stack-based undo functionality for added flexibility.

---

## Features

- **Write/Edit Text**: Users can input text character by character.
- **Undo Functionality**: Press `Ctrl+Z` to undo the last operation (add or remove text).
- **Save Text**: Save the written content to a text file (`notepad.txt`).
- **Exit**: Cleanly exit the application.

---

## Project Structure

- **Main Functionality**:
  - Displays a menu for the user.
  - Allows text input and editing with interactive graphics.
- **Undo Implementation**:
  - Uses a `stack` to store operations (`ADD` and `REMOVE`).
  - Supports undo operations for adding and removing characters.
- **File Operations**:
  - Saves text to `notepad.txt`.

---

## How It Works

### Menu Options
1. **Write/Edit Text**:
   - Type characters to input text.
   - Press `Backspace` to delete the last character.
   - Use `Ctrl+Z` (ASCII 26) to undo the last operation.
   
2. **Save Text**:
   - Saves the entered text to a file named `notepad.txt`.

3. **Exit**:
   - Closes the application and clears the graphics window.

---

## Key Functions

| Function        | Description                                                                                   |
|-----------------|-----------------------------------------------------------------------------------------------|
| `cleardevice()` | Clears the graphics screen and resets it to the default background color.                     |
| `outtextxy()`   | Displays text at specified coordinates in the graphics window.                                |
| `getch()`       | Captures keyboard input.                                                                     |
| `setbkcolor()`  | Sets the background color of the graphics screen.                                             |
| `push()`        | Adds commands (`ADD` or `REMOVE`) to the stack to facilitate undo functionality.              |
| `pop()`         | Removes the most recent command from the stack when an undo operation is performed.           |

---

## Undo Functionality

The undo system works using a **stack**:
- **ADD Operation**: Stores the last added character in the stack.
- **REMOVE Operation**: Stores the last removed character in the stack.
- On pressing `Ctrl+Z`:
  - If the last operation was **ADD**, it removes the character from the text.
  - If the last operation was **REMOVE**, it re-adds the character to the text.

---

---



<img width="475" alt="image" src="https://github.com/user-attachments/assets/4ea060be-2182-4c75-8f0a-5538d35cb6e7">
