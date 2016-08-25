import System.IO


ans = [1,2,3,4, 4,4,4,4]



--This should take a list of ints, and return a list with duplicates removed.
--Why doesn't it compile
fil :: [Int] -> [Int] -> [Int]
fil ret [] = ret
fil ret (x:xs) |  not (elem x ret) = fil (x:ret) xs
					| otherwise  = fil ret xs

main :: IO()				
main = do
		let rsp = fil [1] [1,1,2,2,3,3,4,5]
		
		let a = "hello"
		print rsp
