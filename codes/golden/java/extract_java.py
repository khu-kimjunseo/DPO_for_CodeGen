import json
import os

# Path to the JSON file
input_file = '/Users/kimjunseo/Desktop/2024-2/LLM_for_Code_Translation/golden/java/java.json'

# Output directory for C++ files
output_dir = '/Users/kimjunseo/Desktop/2024-2/LLM_for_Code_Translation/golden/java/'

# Create the output directory if it doesn't exist
os.makedirs(output_dir, exist_ok=True)

# Read the JSON file
with open(input_file, 'r', encoding='utf-8') as file:
    data = json.load(file)

# Iterate over the JSON entries and save each as a .cpp file
for key, code in data.items():
    # Create a filename based on the key
    filename = os.path.join(output_dir, f"{key}.java")
    
    # Write the C++ code to the file
    with open(filename, 'w', encoding='utf-8') as cpp_file:
        cpp_file.write(code)

print(f"All C++ files have been saved in the '{output_dir}' directory.")
