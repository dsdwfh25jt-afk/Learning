fn main() {

let mut string = String::from("Hello i am Gaurav"); 
// we created new string called string
let string_2 = &mut string; 
// we created another strin called string_2 and this string got mutable reference of first string called string 
string_2.push_str(" and i am from India "); 
// here we changed the the string of string_2 coz it have nutable reference so it will be changed in original string also 
println!(" This is 2nd String {}",string_2);
// here we printed the string_2 and string_2's scope ended here and it goes out of scope 

let string_3 = &string; 
// here string_2 goes out of scope so we can use the reference again here 
// so we have created string_3 which is immutable reference to string 
println!(" This is 3rd String {}",string_3);
// we have used here the string_3 and if we want to use it further we can use it until we create a new reference of the sting 
// println!("Try to print string_2 here : {}", string_2);
// we can't use here string_2 coz we have another reference here string_3
// so we cant use this either we use first this print line or we can create another reference after first reference's use is completed 


} 

// string references can not have 1 mutable and one immutable reference at the same time 
// we can create after 1 being used 