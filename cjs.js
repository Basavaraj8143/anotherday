const conversionData = {
    temperature: [
        { label: "Celsius to Fahrenheit", formula: (n) => (n * 9 / 5) + 32 },
        { label: "Fahrenheit to Celsius", formula: (n) => (n - 32) * 5 / 9 },
        { label: "Kelvin to Celsius", formula: (n) => n - 273.15 },
        { label: "Celsius to Kelvin", formula: (n) => n + 273.15 },
        { label: "Fahrenheit to Kelvin", formula: (n) => ((n - 32) * 5 / 9) + 273.15 },
        { label: "Kelvin to Fahrenheit", formula: (n) => ((n - 273.15) * 9 / 5) + 32 }
    ],
    currency: [
        { label: "INR to Dollar", formula: (n) => n / 83.29 },
        { label: "Dollar to INR", formula: (n) => n * 83.29 },
        { label: "INR to Euro", formula: (n) => n * 0.011 },
        { label: "Euro to INR", formula: (n) => n / 0.011 },
        { label: "Euro to Dollar", formula: (n) => n / 1.09 },
        { label: "Dollar to Euro", formula: (n) => n * 1.09 }
    ],
    length: [
        { label: "Meter to Centimeter", formula: (n) => n / 0.01 },
        { label: "Centimeter to Meter", formula: (n) => n * 0.01 },
        { label: "Centimeter to Kilometer", formula: (n) => n * 0.00001 },
        { label: "Kilometer to Centimeter", formula: (n) => n / 0.00001 },
        { label: "Meter to Kilometer", formula: (n) => n / 1000 },
        { label: "Kilometer to Meter", formula: (n) => n * 1000 }
    ]
};

function showOptions() {
    const category = document.getElementById("category").value;
    const conversionType = document.getElementById("conversion-type");
    const optionsDiv = document.getElementById("conversion-options");

    if (category) {
        optionsDiv.classList.remove("hidden");
        conversionType.innerHTML = "";

        conversionData[category].forEach((option, index) => {
            const opt = document.createElement("option");
            opt.value = index;
            opt.textContent = option.label;
            conversionType.appendChild(opt);
        });
    } else {
        optionsDiv.classList.add("hidden");
    }
}

function convert() {
    const category = document.getElementById("category").value;
    const conversionIndex = parseInt(document.getElementById("conversion-type").value);
    const inputValue = parseFloat(document.getElementById("input-value").value);

    if (isNaN(inputValue)) {
        alert("Please enter a valid number!");
        return;
    }

    const selectedConversion = conversionData[category][conversionIndex];
    const result = selectedConversion.formula(inputValue);

    document.getElementById("result").textContent = `${inputValue} converted is ${result.toFixed(2)}`;
}
