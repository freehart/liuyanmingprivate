# sublile ����
#### һ����װ����¼�������غ��ʵİ�װ����http://www.sublimetext.com/3

#### ���������װ��

*   ��װpackage control�����Ȼ��ֱ�����߰�װ��
*   ��Ctrl+`����console��ע�������ȼ���ͻ)
*   ճ�����´��뵽�����в��س���

        import urllib.request,os; pf = 'Package Control.sublime-package'; ipp = sublime.installed_packages_path(); urllib.request.install_opener
        ( urllib.request.build_opener( urllib.request.ProxyHandler()) ); openos.path.join(ipp, pf), 'wb').write(urllib.request.urlopen
        ( 'http://sublime.wbond.net/' + pf.replace(' ','%20')).read())
  
*   ����Sublime Text 3��
*   4. �����Perferences->package settings�п���package   
      control��һ���װ�ɹ���

### ����C���Աر������
* C Improved���������Ի���C������ɫ������
* AllAutocomplete��Sublime�Դ��Ŀ��ԶԵ�ǰ�ļ��еı����ͺ����������Զ���ʾ����
  ��AllAutocomplete���ԶԴ򿪵������ļ��ı�����������ʾ����ǿ��Ĵ����Զ���ʾ����
* ConvertToUTF8���ò��������ʾ��༭ GBK, BIG5, EUC-KR, EUC-JP, Shift_JIS 
  �ȱ�����ļ�
* SideBarEnhancements ��������Դ���ǿ�ڲ���Ŀ¼�����Ҽ���ѡ��
* SublimeClang: sublime ���C���Դ��벹ȫ��������﷨��鹦�ܣ�ֻҪ�������ָ����
  ͷ�ļ��Ϳ����ڴ���������һЩ�ؼ��־Ϳ��Կ�����ȫ�Ĵ����ˡ�
* Ctags: 
    * 1ackage control�а�װ���
    * 2.����ctags��ִ�г���·��Ϊhttp://prdownloads.sourceforge.net/ctags/ctags
    58.zip����ѹ��һ��Ŀ¼,ע��Ҫ�Ǵ�ASCII�ַ���Ŀ¼��Ҫ���ո������������Ŀ��
    * 3	�򿪲˵���Preferences�˵��д�Package settings->ctags->settings-user��settings-default
    ��default�е�����ȫ�����Ƶ�user�У�Ȼ���һ��command�����Ϊctags�Ŀ�ִ���ļ�·��
    * 4�����ϲ���ÿ�ݼ����������ƺ�������ת�����Դ�Preferences->Package Settings->ctags->Key Bindings-User�����༭����ļ�����Ȼ�������֪����ʽ�����Խ�Key Bindings-Default���������copy������Ȼ���޸�ĳЩ�����ֵ
  
�ҵ��������£�

      [
      {
      "command": "navigate_to_definition",
    			     "keys": ["ctrl+t"]
      },
      {
      "command": "jump_back",
    			     "keys": ["alt+,"]
      },
      ]

### �ģ��������
Sublime Text 3 ��ݼ��ܽᣨ���ߣ�
Sublime Text 3 ��ݼ��ܽᣨ���ߣ�

[https://www.douban.com/note/362268947/](https://www.douban.com/note/362268947/)

#### ѡ����

Ctrl+D ѡ�й����ռ���ı��������������ѡ����һ����ͬ���ı���

Alt+F3 ѡ���ı����¿�ݼ�������һ����ѡ��ȫ������ͬ�ı�����ͬʱ�༭���ٸ����ӣ�����ѡ�в�����������ͬ�ı��������������ȡ�

Ctrl+L ѡ�����У��������������ѡ����һ�У�Ч���� Shift+�� Ч��һ����

Ctrl+Shift+L ��ѡ�ж��У��ٰ��¿�ݼ�������ÿ����β�����꣬����ͬʱ�༭��Щ�С�

Ctrl+Shift+M ѡ�������ڵ����ݣ�����ѡ�����ţ����ٸ����ӣ�����ѡ��ɾ�������еĴ��룬��д������������д������������ݡ�

Ctrl+M ����ƶ��������ڽ�����ʼ��λ�á�

Ctrl+Enter ����һ�в������С��ٸ����ӣ���ʹ��겻����β��Ҳ�ܿ������²���һ�С�

Ctrl+Shift+Enter ����һ�в������С��ٸ����ӣ���ʹ��겻�����ף�Ҳ�ܿ������ϲ���һ�С�

Ctrl+Shift+[ ѡ�д��룬���¿�ݼ����۵����롣

Ctrl+Shift+] ѡ�д��룬���¿�ݼ���չ�����롣

Ctrl+K+0 չ�������۵����롣

Ctrl+�� ����λ�Ե��ƶ���꣬�����ƶ���ꡣ

Ctrl+�� ���ҵ�λ�Ե��ƶ���꣬�����ƶ���ꡣ

shift+�� ����ѡ�ж��С�

shift+�� ����ѡ�ж��С�

Shift+�� ����ѡ���ı���

Shift+�� ����ѡ���ı���

Ctrl+Shift+�� ����λ�Ե�ѡ���ı���

Ctrl+Shift+�� ���ҵ�λ�Ե�ѡ���ı���

Ctrl+Shift+�� ����������к���һ�д��뻥��������������в��뵽��һ��֮ǰ����

Ctrl+Shift+�� ����������к���һ�д��뻥��������������в��뵽��һ��֮�󣩡�

Ctrl+Alt+�� �������Ӷ��й�꣬��ͬʱ�༭���С�

Ctrl+Alt+�� �������Ӷ��й�꣬��ͬʱ�༭���С�

#### �༭��

Ctrl+J �ϲ�ѡ�еĶ��д���Ϊһ�С��ٸ����ӣ������и�ʽ��CSS���Ժϲ�Ϊһ�С�

Ctrl+Shift+D ���ƹ���������У����뵽��һ�С�

Tab ����������

Shift+Tab ����������

Ctrl+K+K �ӹ�괦��ʼɾ����������β��

Ctrl+Shift+K ɾ�����С�

Ctrl+/ ע�͵��С�

Ctrl+Shift+/ ע�Ͷ��С�

Ctrl+K+U ת����д��

Ctrl+K+L ת��Сд��

Ctrl+Z ������

Ctrl+Y �ָ�������

Ctrl+U ���������о��� Gtrl+Z һ����

Ctrl+F2 ������ǩ

Ctrl+T ������ĸ������

F6 ���ʼ��ƴд

#### ������

Ctrl+F �򿪵ײ������򣬲��ҹؼ��֡�

Ctrl+shift+F ���ļ����ڲ��ң�����ͨ�༭����ͬ�ĵط���sublime�������Ӷ���ļ��н��в��ң��Ը߶ˣ�δ�о���

Ctrl+P �������򡣾ٸ����ӣ�1�����뵱ǰ��Ŀ�е��ļ��������������ļ���2������@�͹ؼ��֣������ļ��к�������3�����룺�����֣���ת���ļ��и��д��룬4������#�͹ؼ��֣����ұ�������

Ctrl+G ���������Զ�����������������ת�����д��롣�ٸ����ӣ���ҳ�����Ƚϳ����ļ��п��ٶ�λ��

Ctrl+R ���������Զ���@������ؼ��֣������ļ��еĺ��������ٸ����ӣ��ں����϶��ҳ����ٲ���ĳ��������

Ctrl+�� ���������Զ���#������ؼ��֣������ļ��еı��������������ȡ�

Ctrl+Shift+P ������򡣳������ӣ�������������ؼ��֣�����sublime text�����Ĺ��ܣ�����ʹ��package��װ�����

Esc �˳�������ѡ���˳������������ȡ�

#### ��ʾ��

Ctrl+Tab ���ļ��������˳���л���ǰ���ڵı�ǩҳ��

Ctrl+PageDown �����л���ǰ���ڵı�ǩҳ��

Ctrl+PageUp �����л���ǰ���ڵı�ǩҳ��

Alt+Shift+1 ���ڷ������ָ�Ĭ��1������С���̵����֣�

Alt+Shift+2 ���ҷ���-2��

Alt+Shift+3 ���ҷ���-3��

Alt+Shift+4 ���ҷ���-4��

Alt+Shift+5 �ȷ�4��

Alt+Shift+8 ��ֱ����-2��

Alt+Shift+9 ��ֱ����-3��

Ctrl+K+B ����/�رղ������

F11 ȫ��ģʽ

Shift+F11 �����ģʽ