from selenium import webdriver
import time

"""
爬虫反扒机制：下拉分页，不下拉不刷新内容，找每次拉到哪就很重要了。
"""


def getHtml(url, loadmore=False, waittime=10):
    browser = webdriver.Chrome('chromedriver')
    browser.get(url)

    time.sleep(5)
    next_button = browser.find_element_by_class_name("pre_button")
    next_button.click()
    count = 0
    if loadmore:
        #while True:
        while count < 5:
            #try:
                browser.execute_script("window.scroll(0, document.body.scrollHeight*{});".format(0.5))
                time.sleep(3)
                browser.execute_script("window.scrollBy(0, document.body.scrollHeight*{});".format(0.6))
                time.sleep(3)
                browser.execute_script("window.scrollTo(0, document.body.scrollHeight*{});".format(0.8))
                time.sleep(3)
                next_button = browser.find_element_by_id("moreBtn")
                next_button.click()
                browser.execute_script("window.scrollTo(0, document.body.scrollHeight*{});".format(0.7))
                time.sleep(3)
                count += 1
            #except:
                #break
    html = browser.page_source
    #print(html)
    #browser.quit()
    #return html


# for test
url = "http://www.taodocs.com/p-28650462.html"
getHtml(url,True)
# print(html)
