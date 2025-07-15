# 🎮 Arduino Reaction Speed Game (2-Player)

This is a simple Arduino project to build a **2-player reaction speed game**. Players test their reflexes by racing to press a button as soon as the green LED lights up. The first player to react wins the round!

---

## 🛠 Features

✅ 2-player competitive mode  
✅ Visual and audio countdown (LEDs and buzzer)  
✅ Randomized start delay to prevent cheating  
✅ Winner indication with separate LEDs  

---

## ⚙️ How It Works

1. **Countdown Sequence:**
   - Red, yellow, and green LEDs light up in order.
2. **Random Delay:**
   - After the green LED, the system waits for a random time (0.9–4 seconds).
3. **Reaction Phase:**
   - Both players must press their button as quickly as possible.
4. **Winner Indication:**
   - The faster player’s white LED turns **ON**.
   - The slower player’s LED remains **OFF**.
5. **Buzzer:**
   - Sounds to indicate the end of the round.

---

## 🧰 Components Used

- 1 × Arduino Uno
- 2 × Push Buttons
- 3 × Colored LEDs (Red, Yellow, Green)
- 2 × White Indicator LEDs
- 1 × Buzzer
- Resistors (220Ω recommended for LEDs, 10kΩ for pull-downs if needed)
- Breadboard and jumper wires

---
## ▶️ How to Run

Follow these steps to get your Reaction Speed Game working:

1. **Connect your components**
   - Assemble the circuit on a breadboard according to the schematic diagram.
   - Double-check all connections (LED polarity, buzzer orientation, button pins).

2. **Upload the code to your Arduino Uno**
   - Open the Arduino IDE.
   - Copy the full code into a new sketch.
   - Select your board and port:
     ```
     Tools > Board > Arduino Uno
     Tools > Port > [Your Arduino Port]
     ```
   - Click **Verify** (✓) to compile.
   - Click **Upload** (→) to flash the code.

3. **Open the Serial Monitor (optional)**
   - Go to:
     ```
     Tools > Serial Monitor
     ```
   - Set baud rate to **9600** for debugging information.

4. **Start the game**
   - Press the **Reset button** on the Arduino Uno to begin a new round.
   - Wait for the LED sequence and react quickly!

---

✅ **Tip:**  
If you need to restart the game, simply press the reset button again.

---

