import matplotlib.pyplot as plt

def plot_results(results_file):
    time = []
    drag_force = []
    
    with open(results_file, 'r') as file:
        for line in file:
            t, drag = map(float, line.strip().split(","))
            time.append(t)
            drag_force.append(drag)
    
    plt.plot(time, drag_force, label="Drag Force")
    plt.xlabel("Time (s)")
    plt.ylabel("Force (N)")
    plt.title("Drag Force Over Time")
    plt.legend()
    plt.grid()
    plt.show()

if __name__ == "__main__":
    results_file = "../results/simulation_output.csv"
    plot_results(results_file)
