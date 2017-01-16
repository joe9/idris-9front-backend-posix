module Main

data MyList : (elem : Type) -> Type where
  MyNil : MyList elem
  MyCons : elem -> MyList elem -> MyList elem

MyList1 : Type
MyList1 = MyList Integer

append : {a : Type} -> MyList a -> MyList a -> MyList a
append MyNil ys = ys
append (MyCons x xs) ys = MyCons x (append xs ys)

append1 : MyList1 -> MyList1 -> MyList1
append1 MyNil ys = ys
append1 (MyCons x xs) ys = MyCons x (append xs ys)

showMyList : MyList Integer -> String
showMyList MyNil = "Nil"
showMyList (MyCons x xs) = "MyCons " ++ show x  ++ " " ++ showMyList xs

myFun : MyList Integer -> Integer -> Integer
myFun MyNil j = j
myFun (MyCons x xs) j = x + myFun xs j

main : IO ()
main = do
  putStrLn "Hello world"
  putStrLn (show (1000 + 2000))
  putStrLn (show (100012323222232323223232223223232 + 2 + 3))
  putStrLn (showMyList (append (MyCons 10 MyNil) (MyCons 20 (MyCons 30 MyNil))))
  putStrLn (show (myFun (MyCons 10 MyNil) 20))


