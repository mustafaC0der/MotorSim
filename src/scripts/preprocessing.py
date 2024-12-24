import json

def validate_config(config_file):
    try:
        with open(config_file, 'r') as file:
            data = json.load(file)
        print(f"Validated: {config_file}")
        return data
    except json.JSONDecodeError as e:
        print(f"Error in {config_file}: {e}")
        return None

if __name__ == "__main__":
    config_files = ["../config/boundary_conditions.json", "../config/simulation_settings.json"]
    for config in config_files:
        validate_config(config)
    print("Preprocessing complete. Ready for simulation!")
