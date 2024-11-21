-- Higher order functions
-- involves passing functions as arguments to other functions (or returning them as results) -> currying
-- Currying - the process of transforming a function that takes multiple arguments into a function that takes a single argument


-- map function (a refers to the type of the elements in the list, b refers to the type of the elements in the resulting list) - they have to be the same
map' :: (a -> b) -> [a] -> [b]
map' f [] = []
map' f (x:xs) = f x : map' f xs

-- filter function
filter' :: (a -> Bool) -> [a] -> [a]
filter' p [] = []
filter' p (x:xs)
    | p x = x : filter' p xs
    | otherwise = filter' p xs

-- folding functions (foldr, foldl, foldl1, foldr1)
-- foldr, foldl take in a function, accumulator and a list as arguments
-- foldr1, foldl1 take in a function and a list as arguments, as the accumulator is the first or last element of the list
-- foldr1, foldl1 are partial functions, as they will throw an error if the list is empty

-- foldr function (fold right)
foldr' :: (a -> b -> b) -> b -> [a] -> b
foldr' f acc [] = acc
foldr' f acc (x:xs) = f x (foldr' f acc xs)

-- foldl function (fold left) 
foldl' :: (b -> a -> b) -> b -> [a] -> b
foldl' f acc [] = acc
foldl' f acc (x:xs) = foldl' f (f acc x) xs

-- foldl1 function (fold left with the first element of the list as the accumulator)
foldl1' :: (a -> a -> a) -> [a] -> a
foldl1' f (x:xs) = foldl' f x xs

-- foldr1 function (fold right with the last element of the list as the accumulator)
foldr1' :: (a -> a -> a) -> [a] -> a
foldr1' f [x] = x
foldr1' f (x:xs) = f x (foldr1' f xs)

-- Many ways to find length of a list
-- recursion
length' :: [a] -> Int
length' [] = 0
length' (x:xs) = 1 + length' xs

-- using foldr
length'' :: [a] -> Int
length'' ls = foldr(\x acc -> acc + 1) 0 ls

-- using foldl
length''' :: [a] -> Int
length''' ls = foldl(\acc x -> acc + 1) 0 ls

-- Counting the number of positive numbers in a list with foldr
countPositives' :: (Ord a, Num a) => [a] -> Int
countPositives' ls = foldr(\x acc -> if x > 0 then acc + 1 else acc) 0 ls

