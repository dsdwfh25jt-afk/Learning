
struct Account { // use CammelCase for structures
    balance: i64,
    depth: i64,
}

impl Account {
    // here &self is refering to the Account 
    fn actual_balance (&self) -> i64 { //use snack_case for funtions
        self.balance - self.depth 
    }

    // fn with parameter 
    fn parameter_fn (&self , num : i32) -> i32 {
        println!("this is a given parameters : {}", num);
        println!("this is balance : {}", self.balance);
        println!("this is depth : {}", self.depth);
        num
    }

    // struct implicit function 
    fn struct_account () {
        println!("This function has no parameters and only called bt account::struct_account() ....");
    }
}

fn main() {
    let user = Account {
        balance : 10000, 
        depth : 712124,
    };
    println!("The acutal worth of user is {}",user.actual_balance());
    println!("The parameter is here {}",user.parameter_fn(71));
    // user.parameter_fn(99);
    println!("further info is from fucntion of impl account without parameter even without self : ");
    // user.struct_account(); THIS WILL THROW ERROR  
    Account::struct_account();

}

// imp : Doesnt matter where you put structure and funtion and impl func