from selenium import webdriver
import time

"""
爬虫反扒机制1:下拉分页，不下拉不刷新内容。
爬虫反扒机制2:封ip。如何伪装ip。
爬虫反扒机制3:

想写好爬虫还是要掌握js，
程度至少对着文档可以很快实现目标功能。

"""


def getHtml(url, loadmore=False, waittime=10):
    browser = webdriver.Chrome('chromedriver')
    browser.get(url)

    time.sleep(5)
    next_button = browser.find_element_by_class_name("pre_button")
    next_button.click()
    #count = 0
    if loadmore:
        while True:
        #while count < 5:
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
                #count += 1
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
