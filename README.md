# Two Sum - Optimized Sorting & Two-Pointer Approach

This repository features a C++ implementation of the **Two Sum** problem. By utilizing sorting and the two-pointer technique, we can determine if a pair of numbers exists that sums up to a specific target with high efficiency.

---

## 🚀 How the Algorithm Works

1.  **Validation:** If the array contains fewer than 2 elements, it's impossible to have a pair, so we return `false`.
2.  **Sorting:** The array is sorted in ascending order. This allows us to make strategic decisions about which direction to move our pointers.
3.  **Two-Pointer Strategy:**
    * **Start Pointer (`st`):** Placed at the beginning of the sorted array.
    * **End Pointer (`end`):** Placed at the end of the sorted array.
4.  **Convergence:**
    * If `arr[st] + arr[end] == target`: Success!
    * If `sum < target`: We need a larger sum, so we move the start pointer forward (`st++`).
    * If `sum > target`: We need a smaller sum, so we move the end pointer backward (`end--`).

## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n \log n)$ | Dominated by the `std::sort` function. The two-pointer traversal itself is only $O(n)$. |
| **Space Complexity** | $O(1)$ | The algorithm sorts the array in-place and uses no additional data structures. |

---

## 💻 Code Overview

The solution is clean and handles the logic in a single `while` loop:

```cpp
bool twoSum(vector<int>& arr, int target) {
    int n = arr.size();
    if(n < 2) return false; 

    sort(arr.begin(), arr.end()); // O(n log n)
    
    int st = 0, end = n - 1;
    while (st < end) {
        int currentSum = arr[st] + arr[end];
        if(currentSum == target) return true;
        
        else if (currentSum < target) st++; // Increase the sum
        else end--; // Decrease the sum
    }
    return false; 
}

```


#  🧪 Trace Example
Input: arr = [0, -1, 2, -3, 1], target = -2

Sorted Array: [-3, -1, 0, 1, 2]

Step 1: st at -3, end at 2. Sum = -1. (-1 > -2), so end--.

Step 2: st at -3, end at 1. Sum = -2. (Match!)
