This is a simple C program that implements **Binary Search Algorithm** to find an element in a sorted array.

📌 What is Binary Search?

Binary Search is an efficient searching algorithm that works on a **sorted array**.  
It repeatedly divides the search range in half until the target value is found.

- Time Complexity: **O(log n)**
- Requirement: Array must be **sorted**

## How it Works

1. Take a sorted array as input
2. Set `low = 0` and `high = n - 1`
3. Find middle element
4. Compare target with middle element:
   - If equal → found
   - If target is greater → search right side
   - If target is smaller → search left side
5. Repeat until found or range becomes invalid
