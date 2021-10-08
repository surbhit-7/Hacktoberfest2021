//Code ;-
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void helper(stack<int> &s , vector<int> res)
{
    sort(res.begin(),res.end());
    for(int i = 0 ; i < res.size() ; i++)
        s.push(res[i]);
}
void SortedStack :: sort()
{
    vector<int> res;
    while(!s.empty())
    {
        int p = s.top();
        res.push_back(p);
        s.pop();
    }
    helper(s,res);
}
