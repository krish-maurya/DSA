## 1️⃣ Armstrong Number (3-Digit)

Checks whether a number is an Armstrong number.

### 🔍 Approach

- Extract digits
- Cube each digit
- Compare sum with original number

### ⏱ Time Complexity

- **Time:** O(d) where d = number of digits
- **Space:** O(1)

---

## 2️⃣ All Divisors of a Number

Prints all divisors in sorted order using square root optimization.

### 🔍 Approach

- Loop runs until: `i * i <= num`
- If i divides num, both i and num/i are stored

### ⏱ Time Complexity

- **Time:** O(√n)
- **Space:** O(1)

---

## 3️⃣ Prime Number Check

Determines whether a number is prime.

### 🔍 Approach

- Counts total divisors using √n optimization

### ⏱ Time Complexity

- **Time:** O(√n)
- **Space:** O(1)

---

## 4️⃣ GCD – Brute Force Method

Finds GCD by iterating from min(num1, num2) down to 1.

### ⏱ Time Complexity

- **Time:** O(min(a, b))
- **Space:** O(1)

---

## 5️⃣ GCD – Euclidean Algorithm (Optimized)

Efficient recursive mathematical approach:

```
gcd(a, b) = gcd(a % b, b)
```

### ⏱ Time Complexity

- **Time:** O(log(min(a, b)))
- **Space:** O(1)

✔ **This is the most efficient method implemented in the project.**

---

## ▶ How to Compile and Run

### Compile

```bash
g++ filename.cpp -o program
```

### Run

```bash
./program
```

---

## 📊 Complexity Summary

| Algorithm | Time Complexity | Space Complexity |
|-----------|-----------------|------------------|
| Armstrong | O(d) | O(1) |
| Divisors | O(√n) | O(1) |
| Prime Check | O(√n) | O(1) |
| GCD (Brute) | O(min(a,b)) | O(1) |
| GCD (Euclid) | O(log(min(a,b))) | O(1) |

Where d = number of digits

2️⃣ All Divisors of a Number

Prints all divisors in sorted order using square root optimization.

🔍 Approach

Loop runs until:

i * i <= num

If i divides num, both i and num/i are stored.

⏱ Time Complexity
O(√n)
3️⃣ Prime Number Check

Determines whether a number is prime.

🔍 Approach

Counts total divisors using √n optimization.

⏱ Time Complexity
O(√n)
4️⃣ GCD – Brute Force Method

Finds GCD by iterating from min(num1, num2) down to 1.

⏱ Time Complexity
O(min(a, b))
5️⃣ GCD – Euclidean Algorithm (Optimized)

Efficient recursive mathematical approach:

gcd(a, b) = gcd(a % b, b)
⏱ Time Complexity
O(log(min(a, b)))

✔ This is the most efficient method implemented in the project.

▶ How to Compile and Run
Compile
g++ filename.cpp -o program
Run
./program
📊 Complexity Summary
Algorithm	Time Complexity
Armstrong	O(d)
Divisors	O(√n)
Prime Check	O(√n)
GCD (Brute)	O(min(a,b))
GCD (Euclid)	O(log(min(a,b)))