class MedianFinder {
public:
    priority_queue<int> lpq; //max heap
    priority_queue<int,vector<int>,greater<int>> rpq; // min heap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(lpq.empty() || num<lpq.top())
        {
            lpq.push(num);
            
        }
        else
        {
            rpq.push(num);
        }
       
        if(lpq.size()>rpq.size()+1)
        {
            int top = lpq.top();
            lpq.pop();
            rpq.push(top);
        }
        else if(rpq.size()>lpq.size() && rpq.size()>0)
        {
            int top = rpq.top();
            rpq.pop();
            lpq.push(top);
        }
    }
    
    double findMedian() {
        if(rpq.size()==lpq.size())
        {
            return (rpq.top() + lpq.top())/2.0;
        }
        else
        {
            return lpq.top();
        }
    }
};
