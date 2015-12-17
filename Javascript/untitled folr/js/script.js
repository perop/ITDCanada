// JavaScript source code
function countryChange() {
  var province = document.getElementById('province');

  switch (document.getElementById('country').value) {
    /* Iran */
    case 'ir':
      province.innerHTML =
        '<option value="te">Tehran</option>\n' +
        '<option value="is">Isfaharan</option>\n' +
        '<option value="fa">Fars</option>';
      break;
    /* Brazil */
    case 'br':
      province.innerHTML =
        '<option value="sc">Santa Catarina</option>\n' +
        '<option value="sp">Sao Paulo</option>\n' +
        '<option value="pr">Parana</option>';
      break;
    /* Japan */
    case 'jp':
      province.innerHTML =
        "<option value='hi'>Hiroshima</option>\n" +
        "<option value='to'>Tokyo</option>\n" +
        "<option value='os'>Osaka</option>";
      break;
    /* Spain */
    case 'sp':
      province.innerHTML =
        "<option value='ca'>Castilla</option>\n" +
        "<option value='ct'>Catalunya</option>\n" +
        "<option value='pv'>Pais Vascos</option>";
      break;
    /* Italy */
    case 'it':
      province.innerHTML =
        "<option value='nf'>North Ferrari</option>\n" +
        "<option value='cf'>Center Ferrari</option>\n" +
        "<option value='sf'>South Ferrari</option>";
      break;
    default:
      province.innerHTML = "<option>--Province--</option>";
      break;
  }

  provinceChange();
}

function provinceChange() {
  var country = document.getElementById('country').value;
  var province = document.getElementById('province').value;
  var city = document.getElementById('city');


  switch (country) {
    /* Iran */
    case 'ir':
      switch (province) {
        case 'te': /* Tehran */
          city.innerHTML =
            "<option>City1</option>\n" +
            "<option>City2</option>\n" +
            "<option>City3</option>";
          break;
        case 'is': /* Isfaharan */
          city.innerHTML =
            "<option>City4</option>\n" +
            "<option>City5</option>\n" +
            "<option>City6</option>";
          break;
        case 'fa': /* Fars */
          city.innerHTML =
            "<option>City7</option>\n" +
            "<option>City8</option>\n" +
            "<option>City9</option>";
          break;
        }
      break;

    /* Brazil */
    case 'br':
      switch (province) {
        case 'sc': /* Santa Catarina */
          city.innerHTML =
            "<option>Blumenau</option>\n" +
            "<option>Gaspar</option>\n" +
            "<option>Florianopolis</option>";
          break;
        case 'sp': /* Sao Paulo */
          city.innerHTML =
            "<option>Sao Paulo</option>\n" +
            "<option>Campinas</option>\n" +
            "<option>Vargas</option>";
          break;
        case 'pr': /* Parana */
          city.innerHTML =
            "<option>Foz do iguacu</option>\n" +
            "<option>Curitiba</option>\n" +
            "<option>Clevelandia</option>";
          break;
      }
      break;

    /* Japan */
    case 'jp':
      switch (province) {
        case 'hi': /* Hiroshima */
          city.innerHTML =
            "<option>Yurie-chan</option>\n" +
            "<option>Mai-chan</option>\n" +
            "<option>Eri-chan</option>";
          break;
        case 'to': /* Tokyo */
          city.innerHTML =
            "<option>Chinjiku</option>\n" +
            "<option>Kawai</option>\n" +
            "<option>Bruce lee</option>";
          break;
        case 'os': /* Osaka */
          city.innerHTML =
            "<option>Kawana</option>\n" +
            "<option>Takahashi</option>\n" +
            "<option>Chan</option>";
          break;
      }
      break;

    /* Spain */
    case 'sp':
      switch (province) {
        case 'ca': /* Castilla */
          city.innerHTML =
            "<option>Jalapeno</option>\n" +
            "<option>Madrid</option>\n" +
            "<option>Torres</option>";
          break;
        case 'ct': /* Catalunya */
          city.innerHTML =
            "<option>Puyol</option>\n" +
            "<option>Barcelona</option>\n" +
            "<option>Vasco</option>";
          break;
        case 'pv': /* Pais Vascos */
          city.innerHTML =
            "<option>Tacos</option>\n" +
            "<option>Burritos</option>\n" +
            "<option>Doritos</option>";
          break;
      }
      break;

    /* Italy */
    case 'it':
      switch (province) {
        case 'nf': /* North Ferrari */
          city.innerHTML =
            "<option>Northern Ferrari</option>\n" +
            "<option>Ferrari Land</option>\n" +
            "<option>Maclaren</option>";
          break;
        case 'cf': /* Center Ferrari */
          city.innerHTML =
            "<option>Ferrari</option>\n" +
            "<option>BMW</option>\n" +
            "<option>Mercedes</option>";
          break;
        case 'sf': /* South Ferrari */
          city.innerHTML =
            "<option>Don Corleone</option>\n" +
            "<option>Don Pepone</option>\n" +
            "<option>Don Capone</option>";
          break;
      }
      break;

    default:
      city.innerHTML = "<option>--City--</option>";
  }
}

function validateEmail() {
  var email = document.getElementById('email').value;
  var host;
  var domain;

  if (checkCharacters(email)) {
    window.alert('Please only use characters a-z, A-Z, 0-9,.,_');
  } else if (email.indexOf('@') <= 0) {
    window.alert('This is not a valid e-mail!\n' + 'Please specify a host.');
  } else {
    host = email.substring(email.indexOf('@') + 1, email.length);

    if (host.indexOf('.') < 0) {
      window.alert('This is not a valid e-mail!\n' + 'Please specify a domain.');
    } else {
      domain = host.substring(host.indexOf('.') + 1, host.length);
      if ((domain != 'com') && (domain != '.net') && (domain != '.org') &&
          (domain != 'mil') && (domain != 'gov')) {
        window.alert('This is not a valid e-mail!\n' + 'Please correct your domain.');
      }
    }
  }
}

function checkCharacters(text) {
  var charCode;

  for (var i = 0; i < text.length; i++) {
    charCode = text.substr(i,1).charCodeAt();

    if (!(charCode >= 65 && charCode <= 90) &&
      !(charCode >= 97 && charCode <= 122) &&
      !(charCode >= 48 && charCode <= 57) &&
      !(charCode == 46) &&
      !(charCode == 95) &&
      !(charCode == 64)) {
        return true;
    }
  }

  return false;
/*
  var specialChars = new RegExp(/[~`!#$%\^&*+=\-\[\]\\';,/{}|\\":<>\? ]/);

  if (specialChars.test(text)) {
    return true;
  }

  return false;*/
}
