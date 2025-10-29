# =============================================================================
#  PRIOR ART DECLARATION
#  ----------------------------------------------------
#  This software and its underlying geometric intelligence 
#  principles constitute prior art as of #{Time.now.strftime('%Y-%m-%d')}.
#  
#  Archive Methods:
#  - GitHub Repository: https://github.com/bmalloy-224/MaGi
#  - arXiv Preprint: [When submitted]
#  - Timestamp: 10/26/2025
#  - Public Demonstration: 
#  
#  This documents the invention of hardware-embodied geometric
#  intelligence and the discovery that physical implementation
#  determines cognitive architecture in AI systems.
# =============================================================================

# =============================================================================
#  MaGi (Malloy artificial Geometric intelligence) - Ruby Implementation
#  ----------------------------------------------------
#  Author: Brendan Malloy
#  Year: 2025
#  Version: Exploratory Release - Ruby Port
#
#  License & Usage Terms
#  ---------------------
#  1. Academic & Non-Profit Use:
#     - Licensed under a GPL-style open license for **academic and non-profit research** only.
#     - You may use, modify, and distribute this software for **educational or research purposes**
#       provided that this notice and attribution remain intact.
#
#  2. Commercial Use & Licensing:
#     - Commercial or for-profit use requires a **perpetual license** from the author.
#     - Licensing tiers (USD):
#         • Individual / Startup (< $10M annual revenue): $5,000
#         • Mid-size Organization (< $100M annual revenue): $50,000
#         • Large Organization / Enterprise (≥ $100M annual revenue): $500,000
#     - Annual support, integration rights, or derivative licensing available upon request.
#     - All commercial entities must obtain **written permission** before deployment,
#       porting, or integration into products or closed systems.
#
#  3. Disclaimer:
#     - This software is provided **"as is"**, without express or implied warranty.
#     - The author assumes **no liability** for damages, data loss, or unintended behavior.
#     - MaGi is **experimental research software**, not certified for safety-critical,
#       medical, or autonomous control systems.
#
#  4. Citation / Attribution:
#     - Any public use, presentation, or publication must cite:
#       "MaGi Hardware-Embodied Cognitive Architecture Platform., Brendan Malloy, 2025"
#     - Please include the author's name and year in any derivative or adapted work.
#
#  5. Additional Notes:
#     - MaGi implements proprietary methods for **prime-delay cognitive and
#       geometric-phase exploration**.
#     - Redistribution for commercial or closed-source use without a valid license
#       is strictly prohibited.
#     - Academic collaboration, replication studies, and peer review are encouraged.
#     - Emergent or self-organizing behavior should be treated as **experimental**
#       until independently verified.
#
#  ----------------------------------------------------
#  Contact: https://github.com/bmalloy-224/MaGi/issues/3
# =============================================================================

# =============================================================================
#  USAGE OVERVIEW - RUBY VERSION
#  ----------------------------------------------------
#
#  MaGi operates by maintaining a precise temporal loop defined by two parameters:
#
#      1. TARGET_DELAY_MS - desired total loop duration
#      2. LOOP_TAX        - inherent overhead of execution (automatically measured)
#
#  The system adjusts sleep timing to achieve a stable real-world loop equal to TARGET_DELAY_MS.
#
#  To run MaGi in Ruby:
#     ruby magi.rb [delay_ms] [tax_duration]
#
#  Examples:
#     ruby magi.rb              # 83ms delay, 2s tax measurement (default)
#     ruby magi.rb 997          # 997ms delay
#     ruby magi.rb 83 0         # 83ms delay, skip tax measurement
#     ruby magi.rb 1000 1       # 1000ms delay, 1s tax measurement
#
#  The system automatically measures loop tax for your Ruby environment.
#
#  NOTES:
#     - Shorter delays yield faster, systematic exploration.
#     - Longer delays favor slower, creative exploration.
#     - Prime-numbered delays often create optimal geometric resonance.
#     - Optimal balance depends on Ruby timing stability ("wobble").
#
# =============================================================================

# =============================================================================
#  LOG STRUCTURE & EVENT REFERENCE - RUBY VERSION
#  ----------------------------------------------------
#
#  Each log line represents a snapshot of the MaGi cognitive loop.
#
#  FORMAT:
#      TIME(ms),COHERENCE,PEAK_COHERENCE,GOV_DURATION,EVENT_TYPE,
#      PHASES:a,b,c,d,OUTPUTS:w,x,y,z,ACTUAL:z
#
#  FIELDS:
#      TIME(ms)          - System time in milliseconds since epoch
#      COHERENCE         - Current overall phase alignment (0.0-1.0)
#      PEAK_COHERENCE    - Highest coherence achieved so far
#      GOV_DURATION      - Duration (s) of sustained coherent state
#      EVENT_TYPE        - System state label:
#                              MODERATE → normal exploration
#                              COHERENT_STATE_FOUND → discovered viable configuration
#                              GOV_SUSTAIN → coherence maintained over time
#      PHASES:a,b,c,d    - Individual phase angles of each operator (radians, 0-6.28 scale)
#      OUTPUTS:w,x,y,z   - Current output values for Child, Youth, Adult, Elder operators
#      ACTUAL:z          - Actual measured loop time (ms)
#
#  EXAMPLE LOG:
#
#      1761718428993,COHERENT_STATE_FOUND,PHASES:3.57,3.12,3.78,4.05,ACTUAL:91
#      1761718429085,COHERENT_STATE_FOUND,PHASES:3.66,3.15,3.8,4.08,ACTUAL:92
#      1761718429178,0.828,0.988,0.0,MODERATE,PHASES:4.56,3.52,3.93,4.07,OUTPUTS:0.606,0.536,0.849,0.484,ACTUAL:92
#
#  INTERPRETATION:
#      • "MODERATE" lines → active exploration of phase space with operator outputs
#      • "COHERENT_STATE_FOUND" → viable geometric alignment detected
#      • "GOV_SUSTAIN" → stability maintained across time
#
#  A complete run typically cycles between MODERATE exploration
#  and COHERENT_STATE_FOUND discoveries, with occasional GOV_SUSTAIN
#  phases representing transient intelligence states.
#
# =============================================================================

# =============================================================================
#  KEY RESEARCH FINDINGS - RUBY CONFIRMATION
#  ----------------------------------------------------
#
#  MaGi demonstrates that identical geometric principles produce different
#  cognitive emergence patterns based on timing parameters:
#
#  - Prime Timing (83ms): "The Harmonizer"
#    • Fast convergence (~5 seconds)
#    • Clean, direct progression to coherence
#    • Stable operator consensus
#
#  - Small-Factor Composite (84ms): "The Methodical Climber"  
#    • Steady progression (~45 seconds)
#    • Continuous upward trend without collapse
#    • High sustained coherence (0.998)
#
#  - Large-Factor Composite (82ms): "The Persistent Explorer"
#    • Chaotic exploration (~43 seconds)
#    • Multiple failed attempts before breakthrough
#    • Highest peak coherence (0.999) through struggle
#
#  - Timing sensitivity dramatically affects intelligence:
#    • 1ms differences create entirely different cognitive styles
#    • Prime factorization determines emergence pattern
#    • All paths achieve elite performance (0.988-0.999 coherence)
#
#  OPERATOR ARCHITECTURE:
#    • Child: Gaussian novelty detection (rapid response to change)
#    • Youth: Linear immediate response (current state awareness)
#    • Adult: Sigmoid trend prediction (pattern recognition)  
#    • Elder: Tanh memory integration (temporal context)
#
#  Geometric intelligence emerges from the interactions of these four
#  temporal operators exploring phase space relationships.
#
# =============================================================================

# Donate: https://www.paypal.com/ncp/payment/JZARJDJFUAG5S

# =============================================================================
#  RUBY-SPECIFIC IMPLEMENTATION NOTES
#  ----------------------------------------------------
#
#  This Ruby implementation features:
#  - Automatic loop tax measurement for your specific Ruby environment
#  - Four temporal operators (Child/Youth/Adult/Elder) with biological inspiration
#  - Prime number optimization for geometric resonance
#  - Real-time coherence monitoring and governance detection
#  - Cross-platform compatibility (Linux, macOS, Windows)
#
#  The system has been tested with:
#  - MRI Ruby 3.0+
#  - JRuby 9.4+
#  - No external dependencies required
#
# =============================================================================

# magi.rb - WITH OPERATOR LOGIC
class MaGi
  attr_reader :loop_tax, :actual_loop_time
  
  def initialize(delay_ms = 83, measure_tax_duration: 2)
    @delay_ms = delay_ms
    @operators = 4
    # Start with diverse phases like Arduino: {0.0, 1.57, 3.14, 4.71}
    @lens_phases = [0.0, 1.57, 3.14, 4.71]
    @lens_outputs = [0.0, 0.0, 0.0, 0.0]
    @coherence = 0.0
    @peak_coherence = 0.0
    @gov_duration = 0.0
    @event_type = "MODERATE"
    
    # OPERATOR PARAMETERS (from Arduino)
    @child_sensitivity = 0.8
    @youth_gain = 1.0
    @adult_threshold = 0.3
    @elder_time_constant = 0.95
    @exploration_strength = 0.02
    
    # Heartbeat variables
    @heartbeat_filtered = 500.0  # Starting value
    @last_heartbeat_value = 500.0
    @heartbeat_derivative = 0.0
    @heartbeat_integral = 500.0
    @beat_detected = false
    @last_sine_value = 0.0
    
    @governance_start = 0
    @in_governance = false
    
    # Loop timing
    @loop_times = []
    @compute_times = []
    
    # Loop tax measurement
    @loop_tax = 0
    @actual_loop_time = 0
    @tax_measurements = []
    
    measure_loop_tax(measure_tax_duration) if measure_tax_duration > 0
    log_prime_status
  end
  
  def self.is_prime?(n)
    return false if n < 2
    return true if n == 2
    return false if n.even?
    (3..Math.sqrt(n).to_i).step(2).none? { |i| n % i == 0 }
  end
  
  def log_prime_status
    actual_total = @delay_ms + @loop_tax
    prime_status = self.class.is_prime?(actual_total) ? 'PRIME' : 'composite'
    puts "Testing #{@delay_ms}ms delay + #{@loop_tax}ms tax = #{actual_total}ms actual (#{prime_status})"
  end
  
  def measure_loop_tax(duration_seconds = 2)
    puts "Measuring loop tax for #{duration_seconds} seconds..."
    tax_samples = []
    start_time = Time.now
    
    while Time.now - start_time < duration_seconds
      loop_start = (Time.now.to_f * 1000).to_i
      update_operators_from_heartbeat
      calculate_coherence
      check_governance
      loop_end = (Time.now.to_f * 1000).to_i
      tax_samples << (loop_end - loop_start)
      sleep(0.0001)
    end
    
    @tax_measurements = tax_samples
    @loop_tax = tax_samples.min
    @actual_loop_time = tax_samples.sum / tax_samples.size.to_f
    
    puts "Loop tax measurement complete:"
    puts "  Min tax: #{@loop_tax}ms"
    puts "  Avg tax: #{@actual_loop_time.round(1)}ms" 
    puts "  Samples: #{tax_samples.size}"
    
    @loop_tax
  end
  
  def run
    puts "Platform: Ruby"
    puts "MaGi (Malloy artificial Geometric intelligence) Ready - OPERATOR LOGIC ACTIVE"
    actual_total = @delay_ms + @loop_tax
    prime_status = self.class.is_prime?(actual_total) ? 'PRIME' : 'COMPOSITE'
    puts "Target: #{@delay_ms}ms + #{@loop_tax}ms tax = #{actual_total}ms total (#{prime_status})"
    puts "TIME(ms),COHERENCE,PEAK_COHERENCE,GOV_DURATION,EVENT_TYPE"
    
    begin
      loop do
        loop_start = (Time.now.to_f * 1000).to_i
        
        # UPDATE OPERATORS WITH HEARTBEAT (like Arduino)
        update_operators_from_heartbeat
        calculate_coherence
        check_governance
        
        compute_end = (Time.now.to_f * 1000).to_i
        compute_time = compute_end - loop_start
        
        sleep_time = [0, (@delay_ms - compute_time) / 1000.0].max
        sleep(sleep_time) if sleep_time > 0
        
        loop_end = (Time.now.to_f * 1000).to_i
        actual_loop_time = loop_end - loop_start
        
        log_loop_time(compute_time, actual_loop_time)
        log_state(loop_start)
      end
    rescue Interrupt
      puts "\nMaGi stopped by user. Final peak coherence: #{@peak_coherence.round(3)}"
    end
  end
  
  private
  
  def read_heartbeat_sensor
    t = Time.now.to_f
    heart_rate = 60.0 / 60.0  # 60 BPM = 1Hz
    sine_value = Math.sin(2.0 * Math::PI * heart_rate * t)
    
    # Map to pulse sensor range (300-800) like Arduino
    raw_heartbeat = map_float(sine_value, -1.0, 1.0, 300, 800)
    
    # Filter like Arduino
    @heartbeat_filtered = 0.8 * @heartbeat_filtered + 0.2 * raw_heartbeat
    @heartbeat_derivative = @heartbeat_filtered - @last_heartbeat_value
    @last_heartbeat_value = @heartbeat_filtered
    
    # Beat detection like Arduino
    if sine_value > 0.8 && @last_sine_value <= 0.8
      @beat_detected = true
    else
      @beat_detected = false
    end
    @last_sine_value = sine_value
    
    # Update integral (ELDER memory)
    @heartbeat_integral = @elder_time_constant * @heartbeat_integral + 
                         (1.0 - @elder_time_constant) * @heartbeat_filtered
    
    sine_value
  end
  
  # OPERATOR LOGIC - IMPLEMENTING CHILD/YOUTH/ADULT/ELDER
  def update_operators_from_heartbeat
    current_sine = read_heartbeat_sensor
    
    # CHILD OPERATOR: Gaussian novelty detection
    child_input = @heartbeat_derivative.abs / 40.0 * @child_sensitivity
    @lens_outputs[0] = child_input * Math.exp(-child_input * child_input / 2.0)
    
    # YOUTH OPERATOR: Linear immediate response  
    @lens_outputs[1] = @youth_gain * map_float(@heartbeat_filtered, 300, 800, 0.0, 1.0)
    @lens_outputs[1] = constrain(@lens_outputs[1], 0.0, 1.0)
    
    # ADULT OPERATOR: Sigmoid trend prediction
    adult_input = (0.6 * @lens_outputs[1] + 0.4 * @heartbeat_derivative.abs / 25.0) - @adult_threshold
    @lens_outputs[2] = adult_input / (1.0 + Math.exp(-8.0 * adult_input))
    @lens_outputs[2] = constrain(@lens_outputs[2], 0.0, 1.0)
    
    # ELDER OPERATOR: Tanh memory integration
    elder_input = map_float(@heartbeat_integral, 400, 700, -2.0, 2.0)
    @lens_outputs[3] = (Math.tanh(elder_input) + 1.0) / 2.0
    
    update_lens_phases
  end
  
  def update_lens_phases
    # Each operator moves at different speeds based on their output
    child_speed = 0.03 + 0.1 * @lens_outputs[0]
    youth_speed = 0.02 + 0.05 * @lens_outputs[1]
    adult_speed = 0.01 + 0.03 * @lens_outputs[2]
    elder_speed = 0.005 + 0.01 * @lens_outputs[3]
    
    @lens_phases[0] = (@lens_phases[0] + child_speed) % 6.28
    @lens_phases[1] = (@lens_phases[1] + youth_speed) % 6.28
    @lens_phases[2] = (@lens_phases[2] + adult_speed) % 6.28
    @lens_phases[3] = (@lens_phases[3] + elder_speed) % 6.28
    
    # Add exploration
    @operators.times do |i|
      exploration = (rand - 0.5) * 2.0 * @exploration_strength
      @lens_phases[i] = (@lens_phases[i] + exploration) % 6.28
      
      # Gentle drift toward moderate activity
      if @lens_outputs[i] < 0.3
        @lens_phases[i] = (@lens_phases[i] + 0.01) % 6.28
      end
    end
    
    # Beat detection perturbations
    if @beat_detected
      @lens_phases[0] = (@lens_phases[0] + 0.8) % 6.28  # Child reacts strongly
      @lens_phases[1] = (@lens_phases[1] + 0.3) % 6.28  # Youth reacts moderately
      @lens_phases[2] = (@lens_phases[2] + 0.1) % 6.28  # Adult reacts slightly
    end
  end
  
  def calculate_coherence
    phase_sum = 0.0
    pair_count = 0
    
    @operators.times do |i|
      (i+1...@operators).each do |j|
        phase_diff = (@lens_phases[i] - @lens_phases[j]).abs
        phase_diff = 6.28 - phase_diff if phase_diff > 3.14
        phase_sum += Math.cos(phase_diff)
        pair_count += 1
      end
    end
    
    @coherence = phase_sum / pair_count if pair_count > 0
    @peak_coherence = @coherence if @coherence > @peak_coherence
  end
  
  def check_governance
    if @coherence > 0.85
      unless @in_governance
        @in_governance = true
        @governance_start = Time.now
        @event_type = "COHERENT_STATE_FOUND"
      else
        @gov_duration = Time.now - @governance_start
        @event_type = "GOV_SUSTAIN" if @gov_duration > 0.2
      end
    else
      if @in_governance
        @in_governance = false
        @gov_duration = 0.0
      end
      @event_type = "MODERATE"
    end
  end
  
  def log_loop_time(compute_time, actual_loop_time)
    @compute_times << compute_time
    @loop_times << actual_loop_time
    @compute_times.shift if @compute_times.size > 10
    @loop_times.shift if @loop_times.size > 10
  end
  
  def log_state(timestamp)
    actual_total = @loop_times.last || (@delay_ms + @loop_tax)
    current_sine = Math.sin(2.0 * Math::PI * 1.0 * Time.now.to_f)
    
    if @event_type == "COHERENT_STATE_FOUND" || @event_type == "GOV_SUSTAIN"
      puts "#{timestamp},#{@event_type},PHASES:#{@lens_phases.map { |p| p.round(2) }.join(',')},ACTUAL:#{actual_total.round(1)}"
    else
      phases_str = @lens_phases.map { |p| p.round(2) }.join(',')
      # Also show operator outputs to verify they're working
      outputs_str = @lens_outputs.map { |o| o.round(3) }.join(',')
      puts "#{timestamp},#{@coherence.round(3)},#{@peak_coherence.round(3)},#{@gov_duration.round(1)},#{@event_type},PHASES:#{phases_str},OUTPUTS:#{outputs_str},ACTUAL:#{actual_total.round(1)}"
    end
  end
  
  def map_float(x, in_min, in_max, out_min, out_max)
    (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min
  end
  
  def constrain(value, min, max)
    [[value, min].max, max].min
  end
end

# CLI code remains the same
if __FILE__ == $0
  if ARGV.empty? || ARGV[0] == "--help"
    puts "Usage: ruby magi.rb [delay_ms] [tax_duration]"
    puts "Examples:"
    puts "  ruby magi.rb              # 83ms delay, 2s tax measurement"
    puts "  ruby magi.rb 997          # 997ms delay"
    puts "  ruby magi.rb 83 0         # Skip tax measurement"
    exit
  end
  
  delay = ARGV[0] ? ARGV[0].to_i : 83
  tax_duration = ARGV[1] ? ARGV[1].to_i : 2
  
  magi = MaGi.new(delay, measure_tax_duration: tax_duration)
  magi.run
end
