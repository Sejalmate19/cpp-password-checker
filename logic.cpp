<!DOCTYPE html>
<html>
<body>
    <h1>C++ Password Checker</h1>
    <input type="text" id="pass" placeholder="Type here...">
    <h2 id="out">Loading C++ Engine...</h2>
    <script src="wasm_logic.js"></script>
    <script>
        Module.onRuntimeInitialized = () => {
            const input = document.getElementById('pass');
            const output = document.getElementById('out');
            output.innerText = "Engine Ready!";
            input.addEventListener('input', () => {
                output.innerText = "Strength: " + Module.checkPassword(input.value);
            });
        };
    </script>
</body>
</html>
