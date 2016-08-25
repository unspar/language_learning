--takes two lists and returns the zipper of the two 
import System.IO
import Data.List


list1 = [1,2,3,4,5]
list2 = "helloworld"
--my_zip :: [a] -> [b] -> [(a, b)]
--my_zip xs [] = []
--my_zip [] ys = []
--my_zip (x:xs) (y:ys) = (x, y):(my_zip xs ys)
--



main = do
	let	a = zip list1 list2
	print a
