#include <iostream>
#include <string>

using namespace std;

class Image {
public:
	operator string() {
		return "사진";
	}
};

class Message {
public:
	Message(int sendTime, string sendName)
		: sendTime(sendTime), sendName(sendName) {}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
    virtual string GetContent() const { // 동적 바인딩(오버라이딩)
        return "";
    }

private:
	int sendTime;
	string sendName;
};

class TextMessage : public Message {
public:
	TextMessage(int sendTime, string sendName, string text)
		: Message(sendTime, sendName), text(text) {}

	string GetText() const { return text; }
    string GetContent() const { return text; }

private:
	string text;
};

class ImageMessage : public Message {
public:
	ImageMessage(int sendTime, string sendName, Image *image)
		: Message(sendTime, sendName), p_image(image) {}

	Image *GetImage() const { return p_image; }
    string GetContent() const { return (string)*p_image; }
private:
	Image *p_image;
};

void printMessage(const Message &m) { // 함수를 오버로딩 한게 아니라 함수 한개에 부모클래스의 포인터를 매개변수로 받고있다. 부모클래스 포인터 하나만 있으면 부모클래스에 지금 가상함수가 존재하기에 실제로 가상함수를(GetContent()) 쓴다면, 실제로 printMessage(텍스트출력하는 함수), printMessage(그림을 출력하는 함수)각각 자식별로 그것에 맞는 방법으로 다르게 처리가능하다. 이런 이유로 상속을 쓴다. &m이 아니라 m으로 매개변수를 받아버리면(const Message m) 객체가 복사가 된다. 이미 m이 Message의 객체가 되어버려서, Message에서 GetContent()는 ""를 출력하기로 되어있으므로 내용은 둘다 공백이 나옴.
	cout << "보낸 시간 : " << m.GetSendTime() << endl;
	cout << "보낸 사람 : " << m.GetSendName() << endl;
	cout << "  내 용   : " << m.GetContent() << endl;   //매개변수가 TextMessage *m 일때는 m->GetContent(), 레퍼런스 객체를 받을땐(하나의 객체를 매개변수로 받는다고 생각한다.) m.GetContent() 로 사용.
	cout << endl;
};

/*void printMessage(ImageMessage *m) { 
	cout << "보낸 시간 : " << m->GetSendTime() << endl;
	cout << "보낸 사람 : " << m->GetSendName() << endl;
	cout << "  내 용   : " << (string)*m->GetImage() << endl;
	cout << endl;
};*/

int main() {
	Image *p_dogImage = new Image();
    Message *messages[] = {
        new TextMessage(10, "두들", "안녕"),
        new ImageMessage(10, "두들", p_dogImage)
    };
    
    for(Message *m : messages) { // => for(int i = 0; i < 4; i++) {printMessage(*messages[i]);}
        printMessage(*m);
    };
    //메세지를 담는 가장 합리적인 방법은 배열에다 담는것. 따라서 메세지를 받는 배열을 만들어본다. Message가 가지고 있는 멤버는 int sendTime과 string sendName뿐. 그렇기 때문에 TextMessage와 ImageMessage 안에 있는 string text까지 이용을 하고싶으면 일단은 Message를 가리키는 포인터들의 배열을 만들어줘야한다. 포인터가 아니라 Message자체의 배열을 만들게되면 총 두칸에 한칸에(Message[0]) Message객체가 통째로 들어가고 다른 한 칸에(Message[1])에 또 다른 Message객체가 통째로 들어가게 된다. 그러나 그렇게 만들면 칸 자체 내에서 textMessage의 text를 담거나 imageMessage의 image를 담을 공간이 없다. 따라서 Message들을 가리키는 포인터들을 만들어주면(Message *messages[2]) 각각이 textMessage와 imageMessage를 가리키게 만든다. 하나는 textMessage를, 다른 하나는 imageMessage를 가리키게. 두 메세지 전부 동적할당이 된 객체이기 때문에 가리키는 곳에 멤버변수로 text와 *p_image를 가지고 있을터이다.
	TextMessage *hello = new TextMessage(10, "두들", "안녕");
	ImageMessage *dog = new ImageMessage(20, "두들", p_dogImage);

    printMessage(*hello);
    printMessage(*dog);

	delete p_dogImage;
}
