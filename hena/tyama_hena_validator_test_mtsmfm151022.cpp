#include <string>
void test(std::string input, std::string expect);
void testloader(){ //insert test cases here
test("3316", "11111110");
test("3342153", "11111111");
test("8", "11111111");
test("232624", "11110110");
test("1", "10000000");
test("224673432", "11111000");
test("123464334", "11111110");
test("44372332", "11111111");
test("2344", "11111111");
test("6448476233", "11111100");
test("4345174644", "11111111");
test("77743", "11111110");
test("2136524281", "10000000");
test("344373", "11100000");
test("434226", "11111111");
test("7433223", "11111110");
test("2246534", "11110111");
test("634", "11111110");
test("2222", "11111100");
test("2442343238", "11111111");
test("7243344", "11111111");
test("26147234", "10111111");
test("34424", "10011111");
test("6334", "11011111");
test("3828342", "11011110");
test("4431", "11110000");
test("2843212125", "11111111");
test("333336482", "11000000");
test("374", "11110000");
test("4382333", "11100111");
}