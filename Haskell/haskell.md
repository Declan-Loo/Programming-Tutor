# Haskell

## What is Haskell?
- A purely functional programming language (NOT IMPERATIVE e.g. C, C++, Python, Java, etc)
- Note that as haskell is a **pure** functional language, this means functions have 0 side effects (no modifying variables, changing state or performing I/O operations)
  
## What is functional programming?
- A programming paradigm (a way of writing programs) in the form of mathematical functions (thinking like a mathematician)
- You focus on what you want to happen, not how you want that thing to happen step by step (as you did in C, Python)
- Fun for those who like math!
  
## Learning functional from imperative programming
- change your mindset! (its hard at first but once it clicks it gets really fun :D)!
- instead of thinking "how" to achieve this, think about **WHAT** the result should be, by describing the result in the form of transformations or mappings of data

# Haskell Fundamentals

### Lists
- They are **homogeneous** data structures, meaning they need to be in same type
- To define a list in Haskell (GHCi), use the keyword `let`

```
let x = [1,2,3,4,5]
```

**Getting list elements**
```
ghci> "Hello" !! 0
'H'
```

**Comparing lists**
In haskell, you can compare lists if the items can be compared (e.g. letters, integers, etc.) where items are compared in lexicographical order (e.g. dictionary) order with <. <=, >, >=
```
ghci> [5,3,7] > [4,2,5]
True
ghci> [1,2,3] <= [2,3,4]
True
ghci> [2,3,4,5,6] > [5,2,3,4,5]
False
```

#### What happened to loops?
- Functional programming use **recursion** instead of `for` or `while` loops.
- To access each element in the list from start to end, you can use recursion or **higher-order functions** (will come to that later)


### Haskell Types
-- 
#### Types
- Colled