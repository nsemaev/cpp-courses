// Smart pointer with shared ownership
// https://godbolt.org/#g:!((g:!((g:!((h:codeEditor,i:(fontScale:14,fontUsePx:'0',j:1,lang:c%2B%2B,selection:(endColumn:48,endLineNumber:16,positionColumn:48,positionLineNumber:16,selectionStartColumn:48,selectionStartLineNumber:16,startColumn:48,startLineNumber:16),source:'%23include+%3Cmemory%3E%0A%23include+%3Ciostream%3E%0A%0Aint+main()+%7B%0A++++std::shared_ptr%3Cint%3E+sptr(new+int(1))%3B%0A%0A++++std::cout+%3C%3C+sptr.use_count()+%3C%3C+std::endl%3B%0A%0A++++std::shared_ptr%3Cint%3E+sptr2+%3D+sptr%3B%0A++++std::shared_ptr%3Cint%3E+sptr3+%3D+sptr2%3B%0A%0A++++std::cout+%3C%3C+sptr.use_count()+%3C%3C+std::endl%3B%0A%0A++++std::shared_ptr%3Cint%3E+sptr4+%3D+std::move(sptr2)%3B%0A%0A++++std::cout+%3C%3C+sptr.use_count()+%3C%3C+std::endl%3B%0A%7D%0A'),l:'5',n:'0',o:'C%2B%2B+source+%231',t:'0')),k:50,l:'4',n:'0',o:'',s:0,t:'0'),(g:!((h:executor,i:(argsPanelShown:'1',compilationPanelShown:'0',compiler:g111,compilerOutShown:'0',execArgs:'',execStdin:'',fontScale:14,fontUsePx:'0',j:1,lang:c%2B%2B,libs:!(),options:'',source:1,stdinPanelShown:'1',wrap:'1'),l:'5',n:'0',o:'x86-64+gcc+11.1+Executor+(Editor+%231)+C%2B%2B',t:'0')),k:50,l:'4',n:'0',o:'',s:0,t:'0')),l:'2',n:'0',o:'',t:'0')),version:4

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> sptr(new int(1));

    std::cout << sptr.use_count() << std::endl;

    std::shared_ptr<int> sptr2 = sptr;
    std::shared_ptr<int> sptr3 = sptr2;

    std::cout << sptr.use_count() << std::endl;

    std::shared_ptr<int> sptr4 = std::move(sptr2);

    std::cout << sptr.use_count() << std::endl;
}
