// 开启标准输入流监听
process.stdin.resume();
process.stdin.setEncoding("utf8");

console.log("请输入一些内容（输入 exit 退出程序）：");
let inputData = "";
// 监听输入事件
process.stdin.on("data", function (input) {
  if (input.trim() === "") {
    fn(inputData);
    process.exit(); // 如果输入是exit，则退出程序
  } else {
    inputData += input;
  }
});

const fn = (data) => {
  console.log("fn", data);
};
