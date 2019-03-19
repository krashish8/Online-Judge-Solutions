'''
This Codeforces Solution Extractor can be used to extract all your Codeforces
Accepted Solutions to your directory with filename as <Problem ID>.cpp.
(Assuming solutions are submitted in C++)

In case there are multiple accepted solutions, then it adds (1), (2), etc
as suffix to the subsequent files.
'''

import requests
from bs4 import BeautifulSoup
check = []

user_id = input("Enter your Codeforces handle: ")
page_min = int(input("Enter Start Page No.: "))
page_max = int(input("Enter End Page No.: "))
for page in range(page_min,page_max+1):
    url = "https://codeforces.com/submissions/"+user_id+"/page/"+str(page)
    html = requests.get(url).text
    soup = BeautifulSoup(html, 'html.parser')
    s = soup.findAll('tr')
    print("-----EXTRACTING PAGE:",page,"-----")
    for i in range(27,27+50):
        try:
            print("Submission No.: "+str(i-26)+" (Page "+str(page)+")")
            sol_id = s[i].next.next.next.next.next
            sol_time = sol_id.next.next.next.next
            sol_lang = sol_time.next.next.next.next.next.next.next.next.next.next.next.next.next.next.next
            ac = sol_lang.next.next.next.next.next.next
            sol_t = ac.next.next.next.next
            sol_m = sol_t.next.next.next
            ac = ac.strip()
            if ac!="Accepted":
                continue
            p_tag = sol_time.next.next.next.next.next.next.next.next.next.next
            p_id = str(p_tag).split("/")[2]
            sol_url = "https://codeforces.com/contest/"+str(p_id)+"/submission/"+str(sol_id)
            p_type = p_tag.text.split()[0]
            p_name = p_tag.text.split()[1]
            p_url = "https://codeforces.com/contest/"+str(p_id)+"/problem/"+p_type
            sol_id = sol_id.strip()
            sol_url = sol_url.strip()
            sol_time = sol_time.strip()
            sol_lang = sol_lang.strip()
            sol_t = sol_t.strip()
            sol_m = sol_m.strip()
            p_id = p_id.strip()
            p_type = p_type.strip()
            p_name = p_name.strip()
            p_idd=""
            if(p_id+p_type in check):
                p_idd = p_id + p_type + " (" + str(check.count(p_id+p_type)) + ")"
            else:
                p_idd = p_id + p_type
            check.append(p_id+p_type)
            html1 = requests.get(sol_url).text
            idx = html1.find("<pre id")
            idx2 = html1.find("</pre>")
            solution = html1[idx+98:idx2]
            solution = solution.replace('&nbsp;',' ')
            solution = solution.replace('&lt;','<')
            solution = solution.replace('&gt;','>')
            solution = solution.replace('&amp;','&')
            solution = solution.replace('&quot;','\"')
            solution = solution.replace('&apos;',"'")
            solution = solution.replace('\r','')
            fx = open(str(p_idd)+".cpp","w")
            fx.write("")
            fx = open(str(p_idd)+".cpp","a")
            fx.write("/*")
            fx.write("\nProblem Name: "+p_tag.text.strip())
            fx.write("\nProblem ID: "+str(p_id)+p_type)
            fx.write("\nProblem URL: "+p_url)
            fx.write("\nAuthor: Ashish Kumar ("+user_id+")")
            fx.write("\nSolution ID: "+str(sol_id))
            fx.write("\nSolution Time: "+sol_time)
            fx.write("\nLanguage: "+sol_lang)
            fx.write("\nTime consumed: "+sol_t)
            fx.write("\nMemory consumed: "+sol_m)
            fx.write("\n*/\n")
            fx.write(solution)
            fx.close()
        except:
            pass