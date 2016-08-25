import System.IO
import System.Environment
import Data.List

--write three functions that compute the sum of the numbers in a given list using a for-loop, a while-loop and recurison

inp = [1,2,3,4,5,7,2] --my test list

my_sum :: [Int] -> Int
my_sum [] = 0
my_sum (x:xs) = x + my_sum xs
--
main = do
	let a = my_sum  inp
	print a




