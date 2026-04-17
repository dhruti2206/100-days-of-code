//fractional knapsack problem using greedy approach
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct Item {
    int value, weight;
    Item(int v, int w) : value(v), weight(w) {}
};
bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2; // Sort in descending order
}
double fractionalKnapsack(int W, vector<Item>& items) {
    sort(items.begin(), items.end(), compare);
    double totalValue = 0.0;
    for (const Item& item : items) {
        if (item.weight <= W) {
            totalValue += item.value;
            W -= item.weight;
        } else {
            totalValue += item.value * ((double)W / item.weight);
            break; // Knapsack is full
        }
    }
    return totalValue;
}
int main() {
    int W = 50; // Knapsack capacity
    vector<Item> items = { {60, 10}, {100, 20}, {120, 30} };
    double maxValue = fractionalKnapsack(W, items);
    cout << "Maximum value in Knapsack = " << maxValue << endl;
    return 0;
}

