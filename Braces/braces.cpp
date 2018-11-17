int Solution::braces(string a) {
    stack<char> brace;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != ')') 
            brace.push(a[i]) ;
        else {
            if(brace.empty()) 
                return false;
            if(brace.top() == '(') 
                return true;
            int count  =0;
            while(!brace.empty()) {
                count++;
                auto last = brace.top();
                brace.pop();
                if(last == '(') 
                    break;
            }
            if(count < 3) 
                return true;
        }
    }
    return false;
}