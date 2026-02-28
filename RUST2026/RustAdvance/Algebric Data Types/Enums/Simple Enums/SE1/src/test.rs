// enums from book example and practice 

// TWO KIND OF ADD V4 AND V6 CAN BE EITHER BUT NOT BOTH AT SAME

enum IpAddr {
    V4,
    V6,
}

// created struct and using enum inside that as ip kind 
// this will get kind of add ip add and the ip 
struct IpAdd {
    kind : IpAddr , 
    ip_address : String,
}
fn main() {
    let home_add = IpAdd { 
        kind : IpAddr::V4, // kind of ip add 
        ip_address : String::from("192.168.0.01"), // actual ip
    };

    let neibour = IpAdd {
        kind : IpAddr::V6,
        ip_address : String::from("::11"),
    };

}