import System.IO
import Data.List

t_list = [12,43,66,7,9,9,90]

myFun :: [[Char]] -> [Char]
myFun [] = ""
myFun xs = (last xs) ++ myFun (init xs)  






main = do
	
	let a =  map show t_list
	let b = sort a
	let c = myFun b
	print c
