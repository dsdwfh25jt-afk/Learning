fn main() {
    let s = String::from("Hello"); // here s string gets in scope 


    takes_ownership(s);   // here takes ownership function get the ownership of string s 
    // and from here s is no more valid string 

    let x = 5;  // here x gets in scope 
    makes_copy(x); // here x is passed to the function makes_copy as an argument but here x does not actually passed insted its copy is passed 
    // x can be used from here also 


}

fn takes_ownership(ownership:String) {  // here the takes ownership function gets the parameter and it gets the string s as an parameter 
    println!("{}",ownership);  // here the ownership is the new name of string s and it can be used in this function 
}// here the actual value of string s here known as ownership is get dropped due to scope end and when scope ends the drop function automatically called 

fn makes_copy(int:i32) { // here the makes copy furntion get the copy of the value of x as new integer named int 
    println!("{}",int); // here we can use int variable 
}// the scope of the function makes copy ends here .    