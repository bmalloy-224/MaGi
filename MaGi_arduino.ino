/*
  PRIOR ART DECLARATION
  ----------------------------------------------------
  This software and its underlying geometric intelligence 
  principles constitute prior art as of [CURRENT DATE].
  
  Archive Methods:
  - GitHub Repository: https://github.com/bmalloy-224/MaGi
  - arXiv Preprint: [When submitted]
  - Timestamp: 10/26/2025
  - Public Demonstration: 
  
  This documents the invention of hardware-embodied geometric
  intelligence and the discovery that physical implementation
  determines cognitive architecture in AI systems.
*/

/*
  MaGi (Malloy artificial Geometric intelligence)
  ----------------------------------------------------
  Author: Brendan Malloy
  Year: 2025
  Version: Exploratory Release

  License & Usage Terms
  ---------------------
  1. Academic & Non-Profit Use:
     - Licensed under a GPL-style open license for **academic and non-profit research** only.
     - You may use, modify, and distribute this software for **educational or research purposes**
       provided that this notice and attribution remain intact.

  2. Commercial Use & Licensing:
     - Commercial or for-profit use requires a **perpetual license** from the author.
     - Licensing tiers (USD):
         • Individual / Startup (< $10M annual revenue): $5,000
         • Mid-size Organization (< $100M annual revenue): $50,000
         • Large Organization / Enterprise (≥ $100M annual revenue): $500,000
     - Annual support, integration rights, or derivative licensing available upon request.
     - All commercial entities must obtain **written permission** before deployment,
       porting, or integration into products or closed systems.

  3. Disclaimer:
     - This software is provided **“as is”**, without express or implied warranty.
     - The author assumes **no liability** for damages, data loss, or unintended behavior.
     - MaGi is **experimental research software**, not certified for safety-critical,
       medical, or autonomous control systems.

  4. Citation / Attribution:
     - Any public use, presentation, or publication must cite:
       "MaGi Hardware-Embodied Cognitive Architecture Platform., Brendan Malloy, 2025"
     - Please include the author’s name and year in any derivative or adapted work.

  5. Additional Notes:
     - MaGi implements proprietary methods for **prime-delay cognitive and
       geometric-phase exploration**.
     - Redistribution for commercial or closed-source use without a valid license
       is strictly prohibited.
     - Academic collaboration, replication studies, and peer review are encouraged.
     - Emergent or self-organizing behavior should be treated as **experimental**
       until independently verified.


  ----------------------------------------------------
  Contact: https://github.com/bmalloy-224/MaGi/issues/3
*/
// ----------------------------------------------------
//  USAGE OVERVIEW
//  ---------------------------------------------------
//
//  MaGi operates by maintaining a precise temporal loop
//  defined by two parameters:
//
//      1. GOAL_ACTUAL_MS – desired total loop duration
//      2. CODE_TAX       – inherent overhead of execution
//
//  The system adjusts delay() timing to achieve a stable
//  real-world loop equal to GOAL_ACTUAL_MS.
//
//  To profile a new platform:
//     1. Measure the time (in ms) a single loop() iteration
//        takes *without delay()*.
//     2. Record that value as CODE_TAX.
//     3. Set GOAL_ACTUAL_MS to your desired real-time loop rate.
//     4. Run MaGi and observe the discovery pattern.
//
//  Example: For a Teensy 4.0, CODE_TAX ≈ 1 ms
//           For an ATmega328p, CODE_TAX ≈ 120 ms
//
//  The system automatically labels the platform for logs:
//
//      #if defined(__IMXRT1062__)  // Teensy 4.0/4.1
//          const unsigned long CODE_TAX = 1;
//          const String PLATFORM_NAME = "Teensy4";
//      #elif defined(__AVR_ATmega328P__)  // Arduino Uno
//          const unsigned long CODE_TAX = 120;
//          const String PLATFORM_NAME = "ATmega328p";
//      #else
//          const unsigned long CODE_TAX = 50;
//          const String PLATFORM_NAME = "Unknown";
//      #endif
//
//  CONFIGURATION:
//      const unsigned long GOAL_ACTUAL_MS = 17;   // Target loop duration (ms)
//
//  NOTES:
//     - Shorter GOAL_ACTUAL_MS yields faster, systematic exploration.
//     - Longer GOAL_ACTUAL_MS favors slower, creative exploration.
//     - Optimal balance depends on hardware timing stability ("wobble").
//
//  ----------------------------------------------------
// ----------------------------------------------------
//  LOG STRUCTURE & EVENT REFERENCE
//  ---------------------------------------------------
//
//  Each log line represents a snapshot of the MaGi cognitive loop.
//
//  FORMAT:
//      TIME(ms),COHERENCE,PEAK_COHERENCE,GOV_DURATION,EVENT_TYPE,
//      PHASES:a,b,c,d,SINE:x,WOBBLE:y,MAXWOBBLE:z
//
//  FIELDS:
//      TIME(ms)          – System time in milliseconds since start
//      COHERENCE         – Current overall phase alignment (0.0–1.0)
//      PEAK_COHERENCE    – Highest coherence achieved so far
//      GOV_DURATION      – Duration (s) of sustained coherent state
//      EVENT_TYPE        – System state label:
//                              MODERATE → normal exploration
//                              COHERENT_STATE_FOUND → discovered viable configuration
//                              GOV_SUSTAIN → coherence maintained over time
//      PHASES:a,b,c,d    – Individual phase angles of each lens (radians, 0–2π scale)
//      SINE:x            – Current sine position (temporal heartbeat phase)
//      WOBBLE:y          – Measured loop-time deviation (timing instability)
//      MAXWOBBLE:z       – Highest observed deviation so far
//
//  EXAMPLE LOG:
//
//      13:16:33.771 -> 1424923,0.800,0.905,0.2,MODERATE,
//                      PHASES:0.33,1.18,1.14,0.40,
//                      SINE:0.870,WOBBLE:0,MAXWOBBLE:1
//      13:16:36.675 -> 1427843,COHERENT_STATE_FOUND,
//                      PHASES:2.69,1.90,2.60,2.70
//      13:16:39.829 -> 1430972,COHERENT_STATE_FOUND,
//                      PHASES:4.97,5.30,5.21,5.36
//      13:16:39.829 -> 1430972,0.971,0.971,0.0,GOV_SUSTAIN,
//                      PHASES:4.97,5.30,5.21,5.36,
//                      SINE:0.979,WOBBLE:0,MAXWOBBLE:1
//      13:16:50.159 -> 1441308,0.701,0.942,0.0,MODERATE,
//                      PHASES:0.12,0.44,1.08,1.37,
//                      SINE:-0.327,WOBBLE:0,MAXWOBBLE:1
//      13:16:50.299 -> 1441439,COHERENT_STATE_FOUND,
//                      PHASES:0.67,0.74,1.30,1.45
//      13:16:53.812 -> 1444962,COHERENT_STATE_FOUND,
//                      PHASES:3.86,4.66,4.24,4.60
//
//  INTERPRETATION:
//      • "MODERATE" lines → active exploration of phase space
//      • "COHERENT_STATE_FOUND" → viable geometric alignment detected
//      • "GOV_SUSTAIN" → stability maintained across time
//
//  A complete run typically cycles between MODERATE exploration
//  and COHERENT_STATE_FOUND discoveries, with occasional GOV_SUSTAIN
//  phases representing transient intelligence states.
//
//  ----------------------------------------------------
//  KEY RESEARCH FINDINGS
//  ---------------------------------------------------
//
//  MaGi demonstrates that identical code produces different
//  cognitive architectures across hardware platforms:
//
//  - Teensy (Crystal): "Precision Sprinter" 
//    • Fast discovery (8.9s at 17ms timing)
//    • Flexible timing strategy
//    • 0ms wobble, systematic exploration
//
//  - ATmega328p (RC): "Noisy Explorer"
//    • Slow discovery (1441s at 1069ms timing)  
//    • Sine-peak dependent strategy
//    • 21ms wobble, creative exploration
//
//  - Sampling rate exponentially affects intelligence:
//    • 17ms: 143× faster discovery than 1070ms
//    • Hardware stability determines cognitive style
//
// donate: https://www.paypal.com/ncp/payment/JZARJDJFUAG5S

#define CLK 13
#define DIN 11
#define CS  10
#define HEARTBEAT_SENSOR A0

#define X_SEGMENTS   4
#define Y_SEGMENTS   4
#define NUM_SEGMENTS (X_SEGMENTS * Y_SEGMENTS)

byte fb[8 * NUM_SEGMENTS];


// Platform auto-detection
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

// CONFIGURATION - Set your GOAL here. this is the delay time
const unsigned long GOAL_ACTUAL_MS = 17;  

// Calculate required delay parameter
const unsigned long DELAY_PARAMETER = GOAL_ACTUAL_MS - CODE_TAX;


// MaGi State - REMOVE HARDCODED ATTRACTORS
float lens_outputs[4] = {0.0, 0.0, 0.0, 0.0};    
float lens_phases[4] = {0.0, 1.57, 3.14, 4.71};  // Start with diversity
float coherence = 0.0;
bool governance_active = false;
unsigned long governance_start_time = 0;
float governance_duration = 0.0;

// Exploration parameters - NO PREDETERMINED TARGETS
float exploration_strength = 0.02;

// Smart logging
unsigned long last_coherence_log = 0;
const unsigned long COHERENCE_LOG_INTERVAL = 5000;
float max_coherence_since_log = 0.0;

// Heartbeat variables
int raw_heartbeat = 0;
int heartbeat_filtered = 0;
int last_heartbeat = 0;
float heartbeat_derivative = 0.0;
float last_heartbeat_value = 0.0;
float heartbeat_integral = 0.0;
bool beat_detected = false;
unsigned long last_beat_time = 0;
unsigned long heartbeat_start_time = 0;

// Lens parameters
float child_sensitivity = 0.8;
float youth_gain = 1.0;
float adult_threshold = 0.3;
float elder_time_constant = 0.95;

// Wobble tracking
unsigned long last_log_time = 0;
unsigned long wobble_sum_since_log = 0;
int wobble_samples_since_log = 0;
unsigned long max_wobble_since_log = 0;

// ========== ORIGINAL HELPER FUNCTIONS ==========
void shiftAll(byte send_to_address, byte send_this_data) {
  digitalWrite(CS, LOW);
  for (int i = 0; i < NUM_SEGMENTS; i++) {
    shiftOut(DIN, CLK, MSBFIRST, send_to_address);
    shiftOut(DIN, CLK, MSBFIRST, send_this_data);
  }
  digitalWrite(CS, HIGH);
}

void set_pixel(uint8_t x, uint8_t y, uint8_t mode) {
  byte *addr = &fb[x / 8 + y * X_SEGMENTS];
  byte mask = 128 >> (x % 8);
  switch (mode) {
    case 0: *addr &= ~mask; break;
    case 1: *addr |= mask; break;
    case 2: *addr ^= mask; break;
  }
}

void safe_pixel(uint8_t x, uint8_t y, uint8_t mode) {
  if ((x >= X_SEGMENTS * 8) || (y >= Y_SEGMENTS * 8)) return;
  set_pixel(x, y, mode);
}

void clear() {
  byte *addr = fb;
  for (byte i = 0; i < 8 * NUM_SEGMENTS; i++) *addr++ = 0;
}

void show() {
  for (byte row = 0; row < 8; row++) {
    digitalWrite(CS, LOW);
    byte segment = NUM_SEGMENTS;
    while (segment--) {
      byte x = segment % X_SEGMENTS;
      byte y = segment / X_SEGMENTS * 8;
      byte addr = (row + y) * X_SEGMENTS;

      if (segment & X_SEGMENTS) {
        shiftOut(DIN, CLK, MSBFIRST, 8 - row);
        shiftOut(DIN, CLK, LSBFIRST, fb[addr + x]);
      } else {
        shiftOut(DIN, CLK, MSBFIRST, 1 + row);
        shiftOut(DIN, CLK, MSBFIRST, fb[addr - x + X_SEGMENTS - 1]);
      }
    }
    digitalWrite(CS, HIGH);
  }
}

void drawLine(int x0, int y0, int x1, int y1, uint8_t mode) {
  int dx = abs(x1 - x0);
  int dy = abs(y1 - y0);
  int sx = (x0 < x1) ? 1 : -1;
  int sy = (y0 < y1) ? 1 : -1;
  int err = dx - dy;
  
  while(true) {
    safe_pixel(x0, y0, mode);
    if(x0 == x1 && y0 == y1) break;
    int e2 = 2 * err;
    if(e2 > -dy) {
      err -= dy;
      x0 += sx;
    }
    if(e2 < dx) {
      err += dx;
      y0 += sy;
    }
  }
}

float mapFloat(float x, float in_min, float in_max, float out_min, float out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
// ========== END HELPER FUNCTIONS ==========

void setup() {
  Serial.begin(115200);
  pinMode(CLK, OUTPUT);
  pinMode(DIN, OUTPUT);
  pinMode(CS, OUTPUT);
  pinMode(HEARTBEAT_SENSOR, INPUT);

  shiftAll(0x0f, 0x00);
  shiftAll(0x0b, 0x07);
  shiftAll(0x0c, 0x01);
  shiftAll(0x0a, 0x0f);
  shiftAll(0x09, 0x00);
  
  Serial.print("Platform: ");
  Serial.println(PLATFORM_NAME);

  heartbeat_start_time = millis();
  Serial.println("MaGi (Malloy artificial Geometric intelligence) Ready - NO HARDCODED ATTRACTORS");
  Serial.println("TIME(ms),COHERENCE,PEAK_COHERENCE,GOV_DURATION,EVENT_TYPE");
}

void loop() {
  // static unsigned long lastTime = 0;
  // unsigned long currentTimetrack = millis();
  // if (lastTime > 0) {
  //   Serial.print("Actual loop time: ");
  //   Serial.println(currentTimetrack - lastTime);
  // }
  // lastTime = currentTimetrack;
  //need to calibrate loop time between arduinos for delay +/- full loop to be a prime
 static unsigned long lastLoopTime = 0;
  unsigned long currentTime = millis();
  
  // Track wobble
  if (lastLoopTime > 0) {
    unsigned long loopTime = currentTime - lastLoopTime;
    unsigned long wobble = abs((long)(loopTime - GOAL_ACTUAL_MS)); // deviation from target
    
    wobble_sum_since_log += wobble;
    wobble_samples_since_log++;
    if (wobble > max_wobble_since_log) {
      max_wobble_since_log = wobble;
    }
  }
  lastLoopTime = currentTime;

  float currentSine = readHeartbeatSensor();
  updateMaGiFromHeartbeat(); 
  updateGovernanceFromPhases();
  smartCoherenceLogging(currentSine);
  visualizeGovernance();
  delay(DELAY_PARAMETER); // or 1068 for Teensy
}
// tried 1,5,7,10,13,17,20,47,50,501,997 
// HEARTBEAT FUNCTION
float readHeartbeatSensor() {
  unsigned long currentTime = millis() - heartbeat_start_time;
  float timeSec = currentTime / 1000.0;
  
  // Simplified heartbeat - pure sine wave for exploration
  float heartRate = 60.0 / 60.0;  // 60 BPM in Hz
  float sineValue = sin(2.0 * PI * heartRate * timeSec);  // ← rename here
  
  // Map to typical pulse sensor range
  raw_heartbeat = mapFloat(sineValue, -1.0, 1.0, 300, 800);  // ← and here
  
  // Apply filtering and processing
  heartbeat_filtered = 0.8 * heartbeat_filtered + 0.2 * raw_heartbeat;
  heartbeat_derivative = heartbeat_filtered - last_heartbeat_value;
  last_heartbeat_value = heartbeat_filtered;
  
  // Beat detection
  if (sineValue > 0.8 && last_heartbeat <= 0.8) {  // ← and here
    beat_detected = true;
    last_beat_time = millis();
  } else {
    beat_detected = false;
  }
  
  last_heartbeat = sineValue;  // ← and here
  
  // Update integral (memory) - ELDER OPERATOR
  heartbeat_integral = elder_time_constant * heartbeat_integral + 
                      (1.0 - elder_time_constant) * heartbeat_filtered;
  
  return sineValue;  // ← now this works!
}

// TEMPORAL OPERATORS
void updateMaGiFromHeartbeat() {
  // CHILD: Gaussian novelty detection
  float child_input = fabs(heartbeat_derivative) / 40.0 * child_sensitivity;
  lens_outputs[0] = child_input * exp(-child_input * child_input / 2.0);
  
  // YOUTH: Linear immediate response
  lens_outputs[1] = youth_gain * mapFloat(heartbeat_filtered, 300, 800, 0.0, 1.0);
  lens_outputs[1] = constrain(lens_outputs[1], 0.0, 1.0);
  
  // ADULT: Sigmoid trend prediction
  float adult_input = (0.6 * lens_outputs[1] + 0.4 * fabs(heartbeat_derivative) / 25.0) - adult_threshold;
  lens_outputs[2] = adult_input / (1.0 + exp(-8.0 * adult_input));
  lens_outputs[2] = constrain(lens_outputs[2], 0.0, 1.0);
  
  // ELDER: Tanh memory integration
  float elder_input = mapFloat(heartbeat_integral, 400, 700, -2.0, 2.0);
  lens_outputs[3] = (tanh(elder_input) + 1.0) / 2.0;
  
  updateLensPhases();
  calculateCoherence();
}

void calculateCoherence() {
  float phase_sum = 0.0;
  int pair_count = 0;
  
  for(int i = 0; i < 4; i++) {
    for(int j = i+1; j < 4; j++) {
      float phase_diff = fabs(lens_phases[i] - lens_phases[j]);
      if(phase_diff > 3.14) phase_diff = 6.28 - phase_diff;
      phase_sum += cos(phase_diff);
      pair_count++;
    }
  }
  
  coherence = phase_sum / pair_count;
}

// MODIFIED: EXPLORATORY PHASE UPDATES - NO HARDCODED ATTRACTORS
void updateLensPhases() {
  // Each lens moves at different speeds
  float child_speed = 0.03 + 0.1 * lens_outputs[0];
  float youth_speed = 0.02 + 0.05 * lens_outputs[1];
  float adult_speed = 0.01 + 0.03 * lens_outputs[2];
  float elder_speed = 0.005 + 0.01 * lens_outputs[3];
  
  lens_phases[0] = fmod(lens_phases[0] + child_speed, 6.28);
  lens_phases[1] = fmod(lens_phases[1] + youth_speed, 6.28);
  lens_phases[2] = fmod(lens_phases[2] + adult_speed, 6.28);
  lens_phases[3] = fmod(lens_phases[3] + elder_speed, 6.28);
  
  // REPLACE hardcoded attraction with EXPLORATION
  for(int i = 0; i < 4; i++) {
    // Add small random exploration
    float exploration = (random(-100, 100) / 100.0) * exploration_strength;
    lens_phases[i] = fmod(lens_phases[i] + exploration, 6.28);
    
    // Gentle drift toward moderate activity (not fixed positions)
    if (lens_outputs[i] < 0.3) {
      lens_phases[i] = fmod(lens_phases[i] + 0.01, 6.28);
    }
  }
  
  // Beat detection perturbations
  if (beat_detected) {
    lens_phases[0] = fmod(lens_phases[0] + 0.8, 6.28);
    lens_phases[1] = fmod(lens_phases[1] + 0.3, 6.28);
    lens_phases[2] = fmod(lens_phases[2] + 0.1, 6.28);
  }
}

// SIMPLIFIED GOVERNANCE - JUST COHERENCE, NO MODES
void updateGovernanceFromPhases() {
  bool was_active = governance_active;
  governance_active = (coherence > 0.85);
  
  if (governance_active && !was_active) {
    governance_start_time = millis();
    // Log discovery of new coherent state
    Serial.print(millis());
    Serial.print(",COHERENT_STATE_FOUND,PHASES:");
    for(int i = 0; i < 4; i++) {
      Serial.print(lens_phases[i], 2);
      if(i < 3) Serial.print(",");
    }
    Serial.println();
  } else if (governance_active && was_active) {
    governance_duration = (millis() - governance_start_time) / 1000.0;
  }
}

// NEW: SMART LOGGING - ONLY LOG INTERESTING EVENTS WITH PHASE INFO
void smartCoherenceLogging(float sineValue) {  // ADD MISSING PARAMETER
  unsigned long current_time = millis();
  
  // Calculate wobble since last log
  unsigned long avg_wobble = 0;
  if (wobble_samples_since_log > 0) {
    avg_wobble = wobble_sum_since_log / wobble_samples_since_log;
  }
  
  // Track peak coherence
  if (coherence > max_coherence_since_log) {
    max_coherence_since_log = coherence;
  }
  
  // Log on governance events or periodically during high coherence
  bool should_log = false;
  String event_type = "PERIODIC";
  
  if (!governance_active && coherence > 0.85) {
    should_log = true;
    event_type = "GOV_START";
    max_coherence_since_log = coherence;
  } else if (governance_active && coherence < 0.85) {
    should_log = true;
    event_type = "GOV_END";
  } else if (governance_active && (current_time - last_coherence_log >= COHERENCE_LOG_INTERVAL)) {
    should_log = true;
    event_type = "GOV_SUSTAIN";
  } else if (coherence > 0.7 && (current_time - last_coherence_log >= COHERENCE_LOG_INTERVAL * 2)) {
    should_log = true;
    event_type = "MODERATE";
  }
  
  if (should_log) {
    Serial.print(current_time);
    Serial.print(",");
    Serial.print(coherence, 3);
    Serial.print(",");
    Serial.print(max_coherence_since_log, 3);
    Serial.print(",");
    Serial.print(governance_duration, 1);
    Serial.print(",");
    Serial.print(event_type);
    Serial.print(",PHASES:");
    for(int i = 0; i < 4; i++) {
      Serial.print(lens_phases[i], 2);
      if(i < 3) Serial.print(",");
    }
    Serial.print(",SINE:");
    Serial.print(sineValue, 3);
    Serial.print(",WOBBLE:");
    Serial.print(avg_wobble);
    Serial.print(",MAXWOBBLE:");
    Serial.print(max_wobble_since_log);
    
    Serial.println();
    
    // Reset tracking (FIXED - REMOVE DUPLICATE LINES)
    last_coherence_log = current_time;
    wobble_sum_since_log = 0;
    wobble_samples_since_log = 0;
    max_wobble_since_log = 0;
    max_coherence_since_log = 0.0;
  }
}
// SIMPLIFIED VISUALIZATION - FOCUS ON ACTUAL GEOMETRY
void visualizeGovernance() {
  clear();
  
  drawSphereBoundary();
  drawLensPositions();
  drawPhaseConnections();
  drawCoherenceFill();
  
  // SIMPLIFIED: Just show governance duration
  if(governance_active) {
    drawGovernanceDuration();
    
    // Flash boundary during governance
    static bool flash_state = false;
    flash_state = !flash_state;
    if(flash_state) {
      int centerX = 16, centerY = 16, radius = 14;
      for(float angle = 0; angle < 6.28; angle += 0.05) {
        int x = centerX + radius * cos(angle);
        int y = centerY + radius * sin(angle);
        safe_pixel(x, y, 2);
      }
    }
  }
  
  show();
}

// DRAWING FUNCTIONS (keep these the same as before)
void drawSphereBoundary() {
  int centerX = 16, centerY = 16, radius = 12;
  for(float angle = 0; angle < 6.28; angle += 0.1) {
    int x = centerX + radius * cos(angle);
    int y = centerY + radius * sin(angle);
    safe_pixel(x, y, 1);
  }
}

void drawLensPositions() {
  int centerX = 16, centerY = 16, maxRadius = 10;
  
  for(int i = 0; i < 4; i++) {
    float radius = maxRadius * (0.2 + 0.6 * lens_outputs[i]);
    int x = centerX + radius * cos(lens_phases[i]);
    int y = centerY + radius * sin(lens_phases[i]);
    
    int dot_size = 1 + (int)(lens_outputs[i] * 2);
    for(int dx = -dot_size; dx <= dot_size; dx++) {
      for(int dy = -dot_size; dy <= dot_size; dy++) {
        if(dx*dx + dy*dy <= dot_size*dot_size) {
          safe_pixel(x + dx, y + dy, 1);
        }
      }
    }
  }
}

void drawPhaseConnections() {
  int centerX = 16, centerY = 16, maxRadius = 10;
  
  for(int i = 0; i < 4; i++) {
    for(int j = i+1; j < 4; j++) {
      float r1 = maxRadius * (0.2 + 0.6 * lens_outputs[i]);
      float r2 = maxRadius * (0.2 + 0.6 * lens_outputs[j]);
      
      int x1 = centerX + r1 * cos(lens_phases[i]);
      int y1 = centerY + r1 * sin(lens_phases[i]);
      int x2 = centerX + r2 * cos(lens_phases[j]);
      int y2 = centerY + r2 * sin(lens_phases[j]);
      
      drawLine(x1, y1, x2, y2, 1);
    }
  }
}

void drawCoherenceFill() {
  int centerX = 16, centerY = 16;
  int fill_radius = map(coherence * 100, 0, 100, 2, 8);
  
  for(int r = 0; r < fill_radius; r++) {
    for(float angle = 0; angle < 6.28; angle += 0.2) {
      int x = centerX + r * cos(angle);
      int y = centerY + r * sin(angle);
      safe_pixel(x, y, 1);
    }
  }
}

void drawGovernanceDuration() {
  int centerX = 16, centerY = 16;
  int duration_circles = min((int)(governance_duration * 2), 3);
  
  for(int circle = 1; circle <= duration_circles; circle++) {
    int radius = 6 + circle * 2;
    for(float angle = 0; angle < 6.28; angle += 0.15) {
      int x = centerX + radius * cos(angle);
      int y = centerY + radius * sin(angle);
      safe_pixel(x, y, 1);
    }
  }
}
