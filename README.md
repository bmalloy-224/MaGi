# MaGi
MaGi (Malloy artificial Geometric intelligence) Experimental platform demonstrating hardware-dependent cognitive architectures. Measures how oscillator stability, timing, and platform characteristics  shape emergent intelligence in geometric AI systems.

Here's your README with prior art declaration and badges added:

```markdown
![License](https://img.shields.io/badge/License-GPL--3.0%20%2B%20Commercial-blue.svg)
![Research](https://img.shields.io/badge/Research-Geometric%20Intelligence-green.svg)
![Platform](https://img.shields.io/badge/Platform-Teensy%20%7C%20Arduino-orange.svg)
![Status](https://img.shields.io/badge/Status-Experimental%20Research-red.svg)

# MaGi: Hardware-Embodied Geometric Intelligence

**Discovering How Physical Implementation Determines AI Cognitive Architecture**

> **Groundbreaking Finding**: Identical geometric intelligence code produces fundamentally different cognitive styles across hardware platforms. Hardware doesn't just affect performance — it determines *how AI thinks*.

---

## 🏛️ Prior Art Declaration

**This implementation establishes public prior art for hardware-embodied geometric intelligence as of 2025.** The discoveries documented here - particularly that physical hardware determines AI cognitive architecture - are now part of the public domain for research and innovation.

Archive Methods:
- GitHub Repository: This public repository
- Timestamp: Initial commit 2025
- Public Demonstration: Available via simulation and hardware replication

---

## ⚠️ Safety & Disclaimer

MaGi is an experimental cognitive system.  

- Provided **as-is** for research and educational purposes.
- Use caution when connecting to hardware; MaGi may produce unexpected outputs.
- The author is **not liable** for any damage to hardware, data, or other assets.
- Commercial use without authorization is prohibited and subject to licensing fees.

---

## 🎯 The Discovery

MaGi demonstrates that the same geometric intelligence algorithm expresses as different cognitive architectures based on physical hardware characteristics:

- **Teensy (Crystal)**: "Precision Sprinter" — fast, systematic exploration
- **ATmega328p (RC)**: "Noisy Explorer" — creative, peak-dependent strategy  
- **Sampling rate** exponentially affects discovery speed (143× faster at 17ms vs 1070ms)
- **Hardware stability** ("wobble") determines exploration strategy

---

## 🚀 Quick Start

### Hardware Requirements

- Teensy 4.0/4.1 or Arduino Uno (ATmega328p)  
- 8×8 LED matrix display (MAX7219)  
- Pulse sensor (or simulated heartbeat)

### Basic Setup

1. **Clone this repository**
2. **Open `MaGi.ino`** in Arduino IDE
3. **Platform detection** auto-sets `CODE_TAX` and `PLATFORM_NAME`
4. **Set target timing** in `GOAL_ACTUAL_MS`
5. **Upload and monitor serial output**

### Example Configuration

```cpp
// Target 17ms for hyper-intelligence or 1070ms for thorough exploration
const unsigned long GOAL_ACTUAL_MS = 17;  

// Platform detection automatically sets:
// - CODE_TAX (execution overhead: 1ms Teensy, 120ms Arduino)
// - PLATFORM_NAME 
// - Appropriate delay parameters
```

### Simulation Option

* **Online Simulation**: [MaGi on Wokwi](https://wokwi.com/projects/445909586960447489) - run without hardware

---

## 📊 Example Log

```
13:16:33.771 -> 1424923,0.800,0.905,0.2,MODERATE,PHASES:0.33,1.18,1.14,0.40,SINE:0.870,WOBBLE:0,MAXWOBBLE:1
13:16:36.675 -> 1427843,COHERENT_STATE_FOUND,PHASES:2.69,1.90,2.60,2.70
13:16:39.829 -> 1430972,COHERENT_STATE_FOUND,PHASES:4.97,5.30,5.21,5.36
13:16:39.829 -> 1430972,0.971,0.971,0.0,GOV_SUSTAIN,PHASES:4.97,5.30,5.21,5.36,SINE:0.979,WOBBLE:0,MAXWOBBLE:1
13:16:50.159 -> 1441308,0.701,0.942,0.0,MODERATE,PHASES:0.12,0.44,1.08,1.37,SINE:-0.327,WOBBLE:0,MAXWOBBLE:1
13:16:50.299 -> 1441439,COHERENT_STATE_FOUND,PHASES:0.67,0.74,1.30,1.45
13:16:53.812 -> 1444962,COHERENT_STATE_FOUND,PHASES:3.86,4.66,4.24,4.60
```

---

## 🔬 Research Implications

### For AI System Design

* **Hardware diversity** creates cognitive diversity in AI ensembles
* **Sampling rate selection** dramatically affects intelligence emergence
* **Oscillator stability** determines exploration vs exploitation balance
* **Physical embodiment** is a feature, not a bug

### Performance Comparison (same algorithm, different hardware):

| Platform       | Discovery Time | Wobble | Strategy            | Coherence |
| -------------- | -------------- | ------ | ------------------- | --------- |
| Teensy 17ms    | 8.9s           | 0ms    | Precision Sprinter  | 0.96+     |
| Teensy 1070ms  | 1271s          | 0ms    | Systematic Explorer | 0.97+     |
| Arduino 1070ms | 1441s          | 21ms   | Noisy Explorer      | 0.88+     |

---

## 🛠 Technical Architecture

### Core Components

* **Four Cognitive Lenses**: Child, Youth, Adult, Elder operators
* **Geometric Phase Space**: 4D phase coordination
* **Temporal Heartbeat**: 1Hz sine wave reference
* **Stability Metrics**: Wobble, coherence, governance duration

### Platform Detection

```cpp
// Automatic hardware profiling
#if defined(__IMXRT1062__)  // Teensy 4.0/4.1
    const unsigned long CODE_TAX = 1;
    const String PLATFORM_NAME = "Teensy4";
#elif defined(__AVR_ATmega328P__)  // Arduino Uno
    const unsigned long CODE_TAX = 120; 
    const String PLATFORM_NAME = "ATmega328p";
#else
    const unsigned long CODE_TAX = 50;
    const String PLATFORM_NAME = "Unknown";
#endif
```

### Calibration & Timing Verification

* Measure actual loop time using `micros()` or `millis()`
* Adjust `GOAL_ACTUAL_MS` according to platform `CODE_TAX`
* Verify `WOBBLE` remains within expected bounds (0–1ms Teensy, ~21ms Arduino)

---

## 📄 License & Citation

### Academic Use (GPL-3.0)

* Open for research and non-commercial use
* Attribution required: "MaGi Hardware-Embodied Cognitive Architecture Platform, Brendan Malloy, 2025"

### Commercial Licensing

Contact author for commercial licensing tiers:

| Organization Type | License Fee |
| ----------------- | ----------- |
| Startup           | $5,000      |
| Mid-size          | $50,000     |
| Enterprise        | $500,000    |

> Commercial use without authorization is prohibited and subject to licensing fees.

---

## 🤝 Research Collaboration

We're building a database of hardware cognitive signatures. Contribute your findings:

1. **Profile new hardware platforms**
2. **Report discovery patterns**
3. **Extend geometric intelligence concepts**
4. **Explore commercial applications**

---

## 📚 Publications & Prior Art

This implementation establishes prior art for:

* Hardware-dependent cognitive architectures
* Geometric intelligence emergence
* AI system profiling via timing characteristics
* Embodied cognition principles in AI

---

*"Ai's are a reflection of their geometry and the hardware they run on."*
— Brendan Malloy, 2025




