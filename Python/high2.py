"""
Python은 인터넷에서 정보를 가져올 수 있다!
사이트에 접속하면 익숙한 정보가 보일지도?

파이썬은 인덱싱도 가능하다!
예: 'asdf'[1:3] -> 'sd'

변수명을 잘 보자!
무언가 떠오르지 않을까?
"""

from bs4 import BeautifulSoup
import requests

url = 'https://ytn.co.kr'
response = requests.get(url)
html = response.text

soup = BeautifulSoup(html, 'html.parser')

ytsubscriber = soup.select('.icon.youtube > .number')
flag = ytsubscriber[0].text.replace('구독 ', '').replace(',', '')[1:7]
print("flag: %s" %flag)