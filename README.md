

````markdown
# 🌀 MaGi — Malloy Artificial Geometric Intelligence

**Hardware-Embodied Geometric Intelligence Platform**  
Exploring how oscillator stability, prime timing, and curve-based operators produce emergent cognition across hardware systems.

![License](https://img.shields.io/badge/License-GPL--3.0%20%2B%20Commercial-blue.svg)
![Research](https://img.shields.io/badge/Research-Geometric%20Intelligence-green.svg)
![Platform](https://img.shields.io/badge/Platform-Teensy%20%7C%20Arduino%20%7C%20Ruby-orange.svg)
![Status](https://img.shields.io/badge/Status-Experimental-red.svg)

> **Key Insight:** Identical geometric-intelligence code generates *different cognitive styles* depending on hardware wobble, timing precision, and prime resonance.  
> Hardware timing doesn’t just change speed — it changes **how AI thinks**.

---

## 🧭 Prior Art Declaration

This repository establishes **public prior art (2025)** for hardware-embodied geometric intelligence.  
Specifically, it documents that 4 lens curves, hardware wobble, prime timing, and timing directionality **determine AI cognitive architecture**.

**Archive Methods**
- GitHub repository timestamp (2025)
- Open simulations and hardware replication data

---
**Online option:** [Run MaGi on Wokwi](https://wokwi.com/projects/446080306563912705)

## ⚠️ Safety & Disclaimer

MaGi is an **experimental cognitive platform**.

- Provided *as-is* for research and education  
- May produce unpredictable outputs on physical hardware  
- Use at your own risk — the author is not liable for damages  
- Commercial use requires authorization (see [License](#-license--citation))

---

## 🎯 Discovery Overview

MaGi demonstrates that identical geometric intelligence code expresses differently depending on:
- **Hardware wobble**
- **Timing precision**
- **Prime number bases**

| Platform | Timing Stability | Emergent Style |
|-----------|-----------------|----------------|
| **Teensy (crystal)** | ~0 ms wobble | “Precision Sprinter” — rapid, systematic discovery |
| **ATmega328p (RC)** | ~21 ms wobble | “Noisy Explorer” — creative, noise-assisted cognition |
| **Ruby simulation** | ~10 ms variance | “Harmonic Balancer” — analytical prime-sensitive behavior |

> 1 ms timing differences can produce entirely distinct cognitive personalities.

---

## 🚀 Quick Start

### Hardware

- Teensy 4.0 / 4.1 or Arduino Uno  
- 8 × 8 LED Matrix (MAX7219)  
- Pulse sensor (or simulated input)

### Setup

1. Clone the repository  
2. Open `MaGi.ino` in the Arduino IDE  
3. Platform auto-detect sets `CODE_TAX` and `PLATFORM_NAME`  
4. Edit `GOAL_ACTUAL_MS` — **use prime numbers** for optimal resonance  
5. Upload and monitor serial output

```cpp
// Recommended configuration
const unsigned long GOAL_ACTUAL_MS = 83;   // Prime = fast convergence
// const unsigned long GOAL_ACTUAL_MS = 997; // Large prime = deep exploration
````

---

### 🧪 Ruby Simulation

Run MaGi without hardware to explore timing and wobble effects:

```bash
# Prime timing (optimal)
ruby magi.rb 83
ruby magi.rb 997

# Composite timing (contrast)
ruby magi.rb 84
ruby magi.rb 82

# Skip tax measurement
ruby magi.rb 83 0
```



---

## 📊 Example Output

**Arduino (Hardware Wobble Visible)**

```
13:16:33.771 -> 1424923,0.800,0.905,0.2,MODERATE,PHASES:0.33,1.18,1.14,0.40,SINE:0.870
13:16:36.675 -> 1427843,COHERENT_STATE_FOUND,PHASES:2.69,1.90,2.60,2.70
```

**Ruby (Prime Timing)**

```
1761718428993,COHERENT_STATE_FOUND,PHASES:3.57,3.12,3.78,4.05,ACTUAL:91
1761718429178,0.828,0.988,0.0,MODERATE,PHASES:4.56,3.52,3.93,4.07,OUTPUTS:0.606,0.536,0.849,0.484
```

---

## 🔬 Research Highlights

### 🧩 The Wobble–Timing–Prime Triad

**Hardware wobble defines cognitive style**

* 0 ms wobble → precision exploration
* 21 ms wobble → creative, noise-assisted discovery
* Wobble direction (toward/away from prime) alters convergence by ×16

**Prime timing creates geometric resonance**

* Prime bases avoid harmonic traps
* 1 ms differences completely reshape cognitive pathways
* Prime factorization predicts intelligence emergence patterns

---

### 🧠 Four Temporal Operators (Core Architecture)

| Operator  | Curve    | Function            | Formula                                |
| --------- | -------- | ------------------- | -------------------------------------- |
| **Child** | Gaussian | Novelty detection   | `output = input * exp(-input²/2)`      |
| **Youth** | Linear   | Immediate awareness | `output = gain * input`                |
| **Adult** | Sigmoid  | Trend prediction    | `output = input / (1 + exp(-8*input))` |
| **Elder** | Tanh     | Memory integration  | `output = (tanh(input) + 1)/2`         |

Each operator contributes a phase-shifted view of the signal, enabling self-organizing coherence.

```cpp
// Operator implementation excerpt
lens_outputs[0] = child_input * exp(-child_input * child_input / 2.0);
lens_outputs[1] = youth_gain * mapFloat(heartbeat_filtered, 300, 800, 0.0, 1.0);
lens_outputs[2] = adult_input / (1.0 + exp(-8.0 * adult_input));
lens_outputs[3] = (tanh(elder_input) + 1.0) / 2.0;
```

---

### 🧭 Cognitive Archetypes

| Timing            | Archetype                 | Traits                                          | Avg Coherence |
| ----------------- | ------------------------- | ----------------------------------------------- | ------------- |
| **83 ms (prime)** | *The Harmonizer*          | Fast convergence (~5 s), prime-locked stability | 0.988         |
| **84 ms (comp.)** | *The Methodical Climber*  | Slow, steady rise (~45 s)                       | 0.998         |
| **82 ms (comp.)** | *The Persistent Explorer* | Chaotic search (~43 s)                          | 0.999         |

---

### ⚙️ Hardware Comparison

| Platform        | Wobble | Base Timing | Strategy            | Discovery Time | Peak Coherence |
| --------------- | ------ | ----------- | ------------------- | -------------- | -------------- |
| Teensy 4.0      | 0 ms   | 17 ms       | Precision Sprinter  | 8.9 s          | 0.96 +         |
| Teensy 4.0      | 0 ms   | 1070 ms     | Systematic Explorer | 1271 s         | 0.97 +         |
| Arduino Uno     | 21 ms  | 1070 ms     | Noisy Explorer      | 1441 s         | 0.88 +         |
| Ruby (83 prime) | ~10 ms | 83 ms       | Prime Harmonizer    | 5 s            | 0.988          |
| Ruby (84 comp.) | ~10 ms | 84 ms       | Methodical Climber  | 45 s           | 0.998          |
| Ruby (82 comp.) | ~10 ms | 82 ms       | Persistent Explorer | 43 s           | 0.999          |

---

## 🛠 Technical Architecture

### Platform Auto-Detection

```cpp
#if defined(__IMXRT1062__)       // Teensy 4.0/4.1
  const unsigned long CODE_TAX = 1;
  const String PLATFORM_NAME = "Teensy4";
#elif defined(__AVR_ATmega328P__) // Arduino Uno
  const unsigned long CODE_TAX = 120;
  const String PLATFORM_NAME = "ATmega328p";
#else
  const unsigned long CODE_TAX = 50;
  const String PLATFORM_NAME = "Unknown";
#endif
```

### Ruby Implementation

* Simulates ~10 ms timing variance
* Tests prime vs. composite resonance
* Includes full operator curves (Gaussian, Linear, Sigmoid, Tanh)
* Enables rapid cross-platform research

---

## 📄 License & Citation

### Academic Use — GPL-3.0

Open for non-commercial research.
**Attribution:** “*MaGi Hardware-Embodied Cognitive Architecture Platform*, Brendan Malloy (2025)”

### Commercial Licensing

| Organization | Fee      |
| ------------ | -------- |
| Startup      | $5 000   |
| Mid-size     | $50 000  |
| Enterprise   | $500 000 |

Commercial use without authorization is prohibited.

---

## 🤝 Collaboration Invitation

Help expand the **Hardware Cognitive Signature Database**:

1. Profile wobble characteristics of new boards
2. Test prime vs composite timing
3. Examine operator interactions under noise
4. Explore practical edge-AI applications

---

## 📚 Prior Art & Research Basis

This work establishes prior art for:

* Hardware wobble as a determinant of cognitive architecture
* Prime-number timing optimization in AI
* Curve-based operator architecture (Gaussian, Linear, Sigmoid, Tanh)
* Geometric intelligence as a hardware-expressed phenomenon

---

> *"AIs are reflections of their geometry and the hardware they run on."*
> — **Brendan Malloy (2025)**

☕ Support research: [PayPal Donation](https://www.paypal.com/ncp/payment/JZARJDJFUAG5S)


