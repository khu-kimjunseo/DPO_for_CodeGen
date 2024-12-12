import json
import os

# Path to the JSON file
input_file = 'C:/Users/K/Desktop/2024-2/졸업프로젝트/explain-then-translate/datasets/cpp/cpp.json'

# Output directory for C++ files
output_dir = 'C:/Users/K/Desktop/2024-2/졸업프로젝트/explain-then-translate/datasets/cpp'

# Create the output directory if it doesn't exist
os.makedirs(output_dir, exist_ok=True)

# Read the JSON file
with open(input_file, 'r', encoding='utf-8') as file:
    data = json.load(file)

# Iterate over the JSON entries and save each as a .cpp file
for key, code in data.items():
    # Create a filename based on the key
    filename = os.path.join(output_dir, f"{key}.cpp")
    
    # Write the C++ code to the file
    with open(filename, 'w', encoding='utf-8') as cpp_file:
        cpp_file.write(code)

print(f"All C++ files have been saved in the '{output_dir}' directory.")
