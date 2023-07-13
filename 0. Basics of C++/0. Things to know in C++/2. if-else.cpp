string compareIfElse(int a, int b) {
	// Write your code here
	string comp;

	if(a>b) comp="greater";
	else if(a<b) comp = "smaller";
	else comp="equal";

	return comp;
}
