import os
import json
import sys
from datasets import Dataset, DatasetDict

job = sys.argv[1]

# Path to the folder containing JSON files
folder_path = f"../prompt/{job}"

# Collect all JSON files
json_files = [os.path.join(folder_path, f) for f in os.listdir(folder_path) if f.endswith(".json")]

# Read and combine all JSON data
data = []
for json_file in json_files:
    with open(json_file, 'r', encoding='utf-8') as file:
        content = json.load(file)
        data.append(content)

# Create a Hugging Face dataset
hf_dataset = Dataset.from_list(data)

# Split the dataset into train and test sets
train_test_split = hf_dataset.train_test_split(test_size=0.3, seed=42)

# Wrap into DatasetDict
dataset_dict = DatasetDict({
    "train": train_test_split["train"],
    "test": train_test_split["test"]
})

# Save the dataset for later use
dataset_dict.save_to_disk(f"./{job}_datasets")

# Example output
print(dataset_dict)
