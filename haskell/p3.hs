import System.IO
import Data.List

--fibb sequence
--fibs :: Int -> Int
--fibs 0 = 1
--fibs 1 = 1
--fibs n = fibs (n - 1) + fibs (n-2)



fibs :: [Int]
fibs = 0:1:otherFibs
	where otherFibs = zipWith (+) (tail fibs) fibs




main = do
	let a = (take 1000 fibs)
	print	a
	
