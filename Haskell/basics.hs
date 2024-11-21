
-- good introduction to haskell: hhttps://learnyouahaskell.github.io/

-- Haskell is a functional programming language that is statically typed and lazy.
-- It is purely functional, which means that functions do not have side effects.
-- Haskell is also a strongly typed language, which means that the type of every expression is known at compile time.
-- Haskell is also a polymorphic language, which means that functions can operate on multiple data types.
-- Haskell is also a type-inferred language, which means that the compiler can infer the type of an expression.
-- Haskell is also a type-safe language, which means that the compiler will catch type errors at compile time.
-- Haskell is also a high-level language, which means that it is abstracted from the machine code.
-- Haskell is also a concise language, which means that it requires less code to accomplish the same task as other languages.
-- Haskell is also a declarative language, which means that it focuses on what to do rather than how to do it.
-- Haskell is also a pure language, which means that it does not have side effects.
-- Haskell is also a lazy language, which means that it only evaluates expressions when they are needed.
-- Haskell is also a statically typed language, which means that the type of every expression is known at compile time.

-- Introducting functions:
-- double a number

double x = x + x

-- quadruple a number

quad x = double (double x)


-- factorial of a number (common example of recursion)
fact 1 = 1
fact n = n * fact (n - 1)

-- fibonacci sequence
fib 0 = 0
fib 1 = 1 
fib n = fib(n-2) + fib(n-1)

-- pattern matching
-- pattern matching is a way to define functions based on the structure of their inputs
isThree :: (Eq a, Num a) => a -> Bool
isThree 3 = True
isThree _ = False

-- recursion over lists
countPositives :: (Ord a, Num a) => [a] -> Int
countPositives [] = 0
countPositives (x:xs) | x > 0 = 1 + countPositives xs
                      | otherwise = countPositives xs


take' :: Int -> [a] -> [a]
take' 0 _ = []
take' n [] = []
take' n (x:xs) = x : take' (n-1) xs

