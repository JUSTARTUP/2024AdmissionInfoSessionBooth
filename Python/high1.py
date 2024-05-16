"""
Python은 인터넷에서 정보를 가져올 수 있다!
사이트에 접속하면 익숙한 정보가 보일지도?

파이썬은 인덱싱도 가능하다!
예: 'asdf'[:2] -> 'as'

len(이름)을 쓰면 대괄호 안의 길이를 알 수 있을지도?

2개를 잘 조합하면 나오지 않을까?
"""

import requests
import json

res = requests.get('https://www.wpnews.kro.kr/api/article/list')
response = json.loads(res.text)

outputjson = response[0]

print("flag: %d%s%s" %(len(response), outputjson['id'][:3], str(outputjson['editdate'])[:2]))