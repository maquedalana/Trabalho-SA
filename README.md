<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Temperature Range Checker</title>
    <style>
        :root {
            --primary: #3498db;
            --secondary: #2ecc71;
            --danger: #e74c3c;
            --light: #ecf0f1;
            --dark: #2c3e50;
        }
        
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        }
        
        body {
            background-color: var(--light);
            color: var(--dark);
            line-height: 1.6;
            padding: 20px;
        }
        
        .container {
            max-width: 800px;
            margin: 0 auto;
            background: white;
            border-radius: 10px;
            box-shadow: 0 0 20px rgba(0,0,0,0.1);
            overflow: hidden;
            animation: fadeIn 1s ease-in-out;
        }
        
        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(20px); }
            to { opacity: 1; transform: translateY(0); }
        }
        
        header {
            background: var(--primary);
            color: white;
            padding: 20px;
            text-align: center;
        }
        
        h1 {
            margin-bottom: 10px;
            font-size: 2rem;
        }
        
        .subtitle {
            font-weight: 300;
            opacity: 0.9;
        }
        
        .content {
            padding: 20px;
        }
        
        .feature-card {
            background: white;
            border-radius: 8px;
            padding: 20px;
            margin-bottom: 20px;
            box-shadow: 0 4px 6px rgba(0,0,0,0.1);
            transition: transform 0.3s ease;
        }
        
        .feature-card:hover {
            transform: translateY(-5px);
        }
        
        .feature-card h2 {
            color: var(--primary);
            margin-bottom: 10px;
            display: flex;
            align-items: center;
        }
        
        .feature-card h2 i {
            margin-right: 10px;
        }
        
        .code-block {
            background: #f5f5f5;
            padding: 15px;
            border-radius: 5px;
            font-family: 'Courier New', Courier, monospace;
            overflow-x: auto;
            margin: 15px 0;
        }
        
        .demo-section {
            margin: 30px 0;
            text-align: center;
        }
        
        .demo-box {
            background: var(--light);
            border-radius: 8px;
            padding: 20px;
            display: inline-block;
            margin-top: 20px;
            position: relative;
            overflow: hidden;
        }
        
        .demo-box::before {
            content: '';
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 4px;
            background: linear-gradient(90deg, var(--primary), var(--secondary));
        }
        
        .demo-values {
            display: flex;
            flex-wrap: wrap;
            gap: 10px;
            justify-content: center;
            margin-bottom: 15px;
        }
        
        .demo-value {
            width: 50px;
            height: 50px;
            background: white;
            border-radius: 5px;
            display: flex;
            align-items: center;
            justify-content: center;
            font-weight: bold;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
            animation: pulse 2s infinite;
        }
        
        @keyframes pulse {
            0% { transform: scale(1); }
            50% { transform: scale(1.05); }
            100% { transform: scale(1); }
        }
        
        .in-range {
            background: var(--secondary);
            color: white;
            animation: none;
        }
        
        .out-of-range {
            background: var(--danger);
            color: white;
        }
        
        .range-inputs {
            display: flex;
            gap: 20px;
            justify-content: center;
            margin: 20px 0;
        }
        
        .range-input {
            display: flex;
            flex-direction: column;
            align-items: center;
        }
        
        input {
            padding: 8px;
            border: 2px solid var(--light);
            border-radius: 5px;
            text-align: center;
            font-weight: bold;
            width: 80px;
            transition: border-color 0.3s ease;
        }
        
        input:focus {
            outline: none;
            border-color: var(--primary);
        }
        
        button {
            background: var(--primary);
            color: white;
            border: none;
            padding: 10px 20px;
            border-radius: 5px;
            cursor: pointer;
            font-weight: bold;
            transition: background 0.3s ease;
            margin-top: 10px;
        }
        
        button:hover {
            background: #2980b9;
        }
        
        .result {
            margin-top: 20px;
            padding: 15px;
            background: var(--light);
            border-radius: 5px;
            display: none;
        }
        
        .footer {
            text-align: center;
            padding: 20px;
            background: var(--dark);
            color: white;
        }
        
        @media (max-width: 600px) {
            .range-inputs {
                flex-direction: column;
                gap: 10px;
            }
        }
    </style>
</head>
<body>
    <div class="container">
        <header>
            <h1>Temperature Range Checker</h1>
            <div class="subtitle">A C program to analyze temperature measurements</div>
        </header>
        
        <div class="content">
            <div class="feature-card">
                <h2>📊 Descrição do Programa</h2>
                <p>Foi Desenvolvido em sala programa em C, para medição e verificação de temperaturas.</p>
                <p></p>
                <ul>
                    <li>Receber 10 valores para temperatura</li>
                    <li>Dentro do pregrama receber máxima e minima temperatura</li>
                    <li></li>
                    <li>Displays only the values within range</li>
                    <li>Counts how many measurements were in range</li>
                </ul>
            </div>
            
            <div class="feature-card">
                <h2>🔍 Lógica de Programação</h2>
                <p>The program uses a simple but effective algorithm:</p>
                <div class="code-block">
// 1. Collect 10 temperature measurements<br>
// 2. Get lower and upper bounds for ideal range<br>
// 3. Check each measurement against the bounds<br>
// 4. If measurement ∈ [lower, upper], display it<br>
// 5. Count and display the total in-range measurements
                </div>
                <p>Error handling ensures only valid integer inputs are accepted.</p>
            </div>
            
            <div class="demo-section">
                <h2>🎮 Interactive Demo</h2>
                <p>See how the program works with sample values:</p>
                
                <div class="demo-box">
                    <div class="demo-values">
                        <div class="demo-value">18</div>
                        <div class="demo-value">22</div>
                        <div class="demo-value">34</div>
                        <div class="demo-value">19</div>
                        <div class="demo-value">27</div>
                        <div class="demo-value">15</div>
                        <div class="demo-value">31</div>
                        <div class="demo-value">20</div>
                        <div class="demo-value">25</div>
                        <div class="demo-value">30</div>
                    </div>
                    
                    <div class="range-inputs">
                        <div class="range-input">
                            <label>Lower Bound</label>
                            <input type="number" id="lower-bound" value="20">
                        </div>
                        <div class="range-input">
                            <label>Upper Bound</label>
                            <input type="number" id="upper-bound" value="28">
                        </div>
                    </div>
                    
                    <button onclick="checkRange()">Check Range</button>
                    
                    <div class="result" id="result">
                        <p id="range-values"></p>
                        <p id="range-count"></p>
                    </div>
                </div>
            </div>
            
            <div class="feature-card">
                <h2>📂 Repository Contents</h2>
                <ul>
                    <li><strong>temperature_checker.c</strong> - The complete C source code</li>
                    <li><strong>README.md</strong> - Documentation and instructions</li>
                    <li><strong>screenshots/</strong> - Execution examples</li>
                    <li><strong>report.md</strong> - Explanation of logic and tests</li>
                </ul>
            </div>
            
            <div class="feature-card">
                <h2>🚀 Getting Started</h2>
                <p>To compile and run the program:</p>
                <div class="code-block">
gcc temperature_checker.c -o temperature
./temperature
                </div>
                <p>Follow the on-screen prompts to enter temperature measurements and range limits.</p>
            </div>
        </div>
        
        <div class="footer">
            © 2023 Temperature Range Checker Project | Developed in C
        </div>
    </div>

    <script>
        function checkRange() {
            const demoValues = document.querySelectorAll('.demo-value');
            const lowerBound = parseInt(document.getElementById('lower-bound').value);
            const upperBound = parseInt(document.getElementById('upper-bound').value);
            
            if (lowerBound > upperBound) {
                alert('Lower bound must be less than upper bound!');
                return;
            }
            
            let inRangeCount = 0;
            let inRangeValues = [];
            
            demoValues.forEach(valueEl => {
                const value = parseInt(valueEl.textContent);
                valueEl.classList.remove('in-range', 'out-of-range');
                
                if (value >= lowerBound && value <= upperBound) {
                    valueEl.classList.add('in-range');
                    inRangeCount++;
                    inRangeValues.push(value);
                } else {
                    valueEl.classList.add('out-of-range');
                }
            });
            
            const resultEl = document.getElementById('result');
            document.getElementById('range-values').textContent = 
                `Values in range: ${inRangeValues.join(', ')}`;
            document.getElementById('range-count').textContent = 
                `Total in range: ${inRangeCount}`;
            resultEl.style.display = 'block';
        }
    </script>
</body>
</html>
